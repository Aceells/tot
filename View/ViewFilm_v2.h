#include <iostream>
#include <string>
#include "../Model/ModelFilm_v2.h"
using namespace std;

void vAddFilm(){
    string judulFilminput;
    string genreFilminput;
    string durasiFilminput;
    cout << "Masukkan Judul Film: ";
    cin >> judulFilminput;
    cout << "Masukkan Genre Film: ";
    cin >> genreFilminput;
    cout << "Masukkan Durasi Film: ";
    cin >> durasiFilminput;
    mAddFilm(judulFilminput, genreFilminput, durasiFilminput);
}
void vViewFilms(){
    mViewFilms();
}
void vSearchFilm(){
    string judulFilminput;
    cout << "Masukkan Judul Film: ";
    cin >> judulFilminput;
    int index = mSearchFilm(judulFilminput);
    if(index != -1){
        cout << "Judul Film : " << judulFilm[index] << endl;
        cout << "Genre Film : " << genreFilm[index] << endl;
        cout << "Durasi Film: " << durasiFilm[index] << endl;
    }else{
        cout << "Film Tidak di Temukan" << endl;
    }
}
