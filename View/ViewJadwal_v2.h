#include <iostream>
#include <string>
#include "../Model/ModelJadwal_v2.h"
using namespace std;

void vAddJadwal(){
    string jamTayanginput;
    string tanggalTayanginput;
    string namaStudioTayanginput;
    string judulFilmTayanginput;
    int hargaTiketinput;
    cout << "Masukkan Jam Tayang: ";
    getline(cin, jamTayanginput);
    cout << "Masukkan Tanggal Tayang: ";
    getline(cin, tanggalTayanginput);
    cout << "Masukkan Nama Studio Tayang: ";
    getline(cin, namaStudioTayanginput);
    cout << "Masukkan Judul Film Tayang: ";
    getline(cin, judulFilmTayanginput);
    cout << "Masukkan Harga Tiket: ";
    cin >> hargaTiketinput;
    mAddJadwal(jamTayanginput, tanggalTayanginput, namaStudioTayanginput, judulFilmTayanginput, hargaTiketinput);
}
void vViewJadwals(){
    mViewJadwal();
}
void vSearchJadwal(){
    int kodeTayanginput;
    cout << "Masukkan Kode Tayang: ";
    cin >> kodeTayanginput;
    int index = mSearchJadwal(kodeTayanginput);
    if(index != -1){
        cout << "Kode Tayang: " << kodeTayang[index] << endl;
        cout << "Jam Tayang: " << jamTayang[index] << endl;
        cout << "Tanggal Tayang: " << tanggalTayang[index] << endl;
        cout << "Nama Studio: " << namaStudioTayang[index] << endl;
        cout << "Judul Film: " << judulFilmTayang[index] << endl;
        cout << "Harga Tiket: " << hargaTiket[index] << endl;
    }else{
        cout << "Jadwal Tidak di Temukan" << endl;
    }
}
