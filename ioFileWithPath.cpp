#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    string NamaFile;
    
    cout << "Masukan Nama File : ";
    cin >> NamaFile;

    //membuka file dalam mode menulis.
    ofstream outfile;
    //menunjuk kesebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);

    cout << ">= Menulis File, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis
    while (true) {
        cout << "- ";
        //menapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukan karakter q
        if (baris == "q") break;
        //menuliskan dan memasukan nilai dari 'baris' kedalam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    outfile.close();

    //membuka file dalam mode membaca
    ifstream infile;

    //menunjuk kesebuah file
    infile.open(NamaFile + ".txt", ios::in);

    cout << endl << ">= Membuka dan membaca file " << endl;
    //jika file ada maka
   
}