#include <string>
#include <iostream>
#include "../Database/DatabaseJadwal_v2.h"
using namespace std;

void mAddJadwal(string inpjamtayang, string inptanggaltayang, string inpnamastudiotayang, string inpjudulfilmtayang, int inphargatiket){
    int indexStudio = mSearchStudio(inpnamastudiotayang);
    int indexFilm = mSearchFilm(inpjudulfilmtayang);
    if(indexStudio != -1 && indexFilm != -1){
        kodeTayang[nJadwal] = nJadwal + 1;
        jamTayang[nJadwal] = inpjamtayang;
        tanggalTayang[nJadwal] = inptanggaltayang;
        namaStudioTayang[nJadwal] = inpnamastudiotayang;
        judulFilmTayang[nJadwal] = inpjudulfilmtayang;
        hargaTiket[nJadwal] = inphargatiket;
        nJadwal++;
    }else{
        cout << "Studio atau Film tidak di Temukan" << endl;
    }
}
void mViewJadwal(){
    cout << "Daftar Jadwal" << endl;
    for(int i = 0; i < nJadwal; i++){
        cout << "Kode Tayang: " << kodeTayang[i] << endl;
        cout << "Jam Tayang: " << jamTayang[i] << endl;
        cout << "Tanggal Tayang: " << tanggalTayang[i] << endl;
        cout << "Nama Studio: " << namaStudioTayang[i] << endl;
        cout << "Judul Film: " << judulFilmTayang[i] << endl;
        cout << "Harga Tiket: " << hargaTiket[i] << endl;
        cout << endl;
    }
}
int mSearchJadwal(int inpkodetayang){
    int index = -1;
    for(int i = 0; i < nJadwal; i++){
        if(kodeTayang[i] == inpkodetayang){
            index = i;
            break;
        }
    }
    return index;
}
