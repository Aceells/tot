#include <iostream>
#include <string>
#include "../Database/DatabaseFilm_v2.h"
using namespace std;

void mAddFilm(string inpjudulfilm, string inpgenrefilm, string inpdurasifilm){
    judulFilm[nFilm] = inpjudulfilm;
    genreFilm[nFilm] = inpgenrefilm;
    durasiFilm[nFilm] = inpdurasifilm;
    nFilm++;
}
void mViewFilms(){
    cout << "Daftar Film" << endl;
    for(int i = 0; i < nFilm; i++){
        cout << "Judul Film: " << judulFilm[i] << endl;
        cout << "Genre Film: " << genreFilm[i] << endl;
        cout << "Durasi Film: " << durasiFilm[i] << endl;
        cout << endl;
    }
}
int mSearchFilm(string inpjudulfilm){
    int index = -1;
    for(int i = 0; i < nFilm; i++){
        if(judulFilm[i] == inpjudulfilm){
            index = i;
            break;
        }
    }
    return index;
}
