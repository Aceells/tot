#include <iostream>
#include <string>
#include "../Database/DatabaseStudio_v2.h"
using namespace std;

void mAddStudio(string inpnamastudio, int inpjumlahkursi){
    namaStudio[nStudio] = inpnamastudio;
    jumlahKursi[nStudio] = inpjumlahkursi;
    nStudio++;
}
void mViewStudios(){
    cout << "Daftar Studio" << endl;
    for(int i = 0; i < nStudio; i++){
        cout << "Nama Studio: " << namaStudio[i] << endl;
        cout << "Jumlah Kursi: " << jumlahKursi[i] << endl;
        cout << endl;
    }
}
int mSearchStudio(string inpnamastudio){
    int index = -1;
    for(int i = 0; i < nStudio; i++){
        if(namaStudio[i] == inpnamastudio){
            index = i;
            break;
        }
    }
    return index;
}
