/* NAMA: Adam Muhammad Ali Yusuf
    Nim: 221401082*/


#include <iostream>
#include <string>

using namespace std;
    

// definisi struct
struct timnas_seagames {
    string nama;
    int umur;
    string berasal;
    string divisi;
};

int main() {
    // deklarasi variabel struct
    timnas_seagames atlit;

    // mengisi nilai variabel struct
    atlit.nama = "JIDAN";
    atlit.umur = 18;
    atlit.berasal= " MEDAN ";
    atlit.divisi = " Bulu tangkis";

    // menampilkan nilai variabel struct
    cout << "Nama: " << atlit.nama << endl;
    cout << "Umur: " << atlit.umur << endl;
    cout<<"Berasal dari kota : "<<atlit.berasal<< endl;
    cout << "Divisi: " << atlit.divisi << endl;

    return 0;
}