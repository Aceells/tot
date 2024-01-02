#include <iostream>
#include <string>
#include "../Model/ModelStudio_v2.h"
using namespace std;

void vAddStudio(){
    string namaStudioinput;
    int jumlahKursiinput;
    cout << "Masukkan Nama Studio: ";
    cin >> namaStudioinput;
    cout << "Masukkan Jumlah Kursi: ";
    cin >> jumlahKursiinput;
    mAddStudio(namaStudioinput, jumlahKursiinput);
}
void vViewStudios(){
    mViewStudios();
}
void vSearchStudio(){
    string namaStudioinput;
    cout << "Masukkan Nama Studio: ";
    cin >> namaStudioinput;
    int index = mSearchStudio(namaStudioinput);
    if(index != -1){
        cout << "Nama Studio: " << namaStudio[index] << endl;
        cout << "Jumlah Kursi: " << jumlahKursi[index] << endl;
    }else{
        cout << "Studio Tidak di Temukan" << endl;
    }
}
