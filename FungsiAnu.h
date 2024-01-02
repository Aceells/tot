#include <iostream>
#include <string>
#include "View/ViewFilm_v2.h"
#include "View/ViewStudio_v2.h"
#include "View/ViewMember_v2.h"
#include "View/ViewJadwal_v2.h"
using namespace std;

void static_value(){
    //Static Film Database
    mAddFilm("The Avengers: Sevenfoldism", "Action", "2 Jam");
    mAddFilm("One Piece The Movie: BLACK", "Comedy", "1 Jam");
    mAddFilm("Ada Pocong di Rumah Pak RT", "Horror", "1,5 Jam");
    //Static Studio Database
    mAddStudio("Theater 1", 50);
    mAddStudio("Theater 2", 50);
    mAddStudio("Theater 3", 50);
    //Static Member Database
    mAddMember("Aceels", "082123456789", "ace@gmail.com", "");
    mAddMember("Onyon", "08212345678", "ony@gmail.com", "");
    mAddMember("Danyok", "0821234567", "dan@gmail.com", "");
    //Static Jadwal Database
    mAddJadwal("10.00", "12-12-2019", "Theater 1", "One Piece The Movie: BLACK", 40000);
    mAddJadwal("12.00", "12-12-2019", "Theater 2", "The Avengers: Sevenfoldism", 50000);
}
//MenuFilm Implementasi
void MenuFilm(){
    int pilihan;
    cout << "Menu Film" << endl;
    cout << "1. Tambah Film" << endl;
    cout << "2. Lihat Film" << endl;
    cout << "3. Cari Film" << endl;
    cout << "0. Beranda/Menu Utama \n";
    cout << "Masukkan Pilihan: ";
    cin >> pilihan;
    switch(pilihan){
    case 1:
        vAddFilm();
        break;
    case 2:
        vViewFilms();
        break;
    case 3:
        vSearchFilm();
        break;
    case 0:
        //cout << "Terima Kasih Telah Menggunakan Aplikasi Kami :)" << endl;
        break;
    default:
        cout << "Pilihan Tidak Tersedia/Tidak Valid" << endl;
        break;
    }
}
//MenuStudio Implementasi
void MenuStudio(){
    int pilihan;
    cout << "Menu Studio" << endl;
    cout << "1. Tambah Studio" << endl;
    cout << "2. Lihat Studio" << endl;
    cout << "3. Cari Studio" << endl;
    cout << "0. Beranda/Menu Utama \n";
    cout << "Masukkan Pilihan: ";
    cin >> pilihan;
    switch(pilihan){
    case 1:
        vAddStudio();
        break;
    case 2:
        vViewStudios();
        break;
    case 3:
        vSearchStudio();
        break;
    case 0:
        //cout << "Terima Kasih Telah Menggunakan Aplikasi Kami :)" << endl;
        break;
    default:
        cout << "Pilihan Tidak Tersedia/Tidak Valid" << endl;
        break;
    }
}
//MenuJadwal Implementasi
void MenuJadwal(){
    int pilihan;
    cout << "Menu Jadwal" << endl;
    cout << "1. Tambah Jadwal" << endl;
    cout << "2. Lihat Jadwal" << endl;
    cout << "3. Cari Jadwal" << endl;
    cout << "0. Beranda/Menu Utama \n";
    cout << "Masukkan Pilihan: ";
    cin >> pilihan;
    switch(pilihan){
    case 1:
        vAddJadwal();
        break;
    case 2:
        vViewJadwals();
        break;
    case 3:
        vSearchJadwal();
        break;
    case 0:
        //cout << "Terima Kasih Telah Menggunakan Aplikasi Kami :)" << endl;
        break;
    default:
        cout << "Pilihan Tidak Tersedia/Tidak Valid" << endl;
        break;
    }
}
//MenuMember Implementasi
void MenuMember(){
    int pilihan;
    cout << "1. Registrasi Member" << endl;
    cout << "2. Lihat Member" << endl;
    cout << "3. Cari Member" << endl;
    cout << "4. Update Password" << endl;
    cout << "0. Beranda/Menu Utama \n";
    cout << "Masukkan Pilihan: ";
    cin >> pilihan;
    switch(pilihan){
    case 1:
        vAddMember();
        break;
    case 2:
        vViewMembers();
        break;
    case 3:
        vSearchMember();
        break;
    case 4:
        vUpdatePass();
        break;
    case 0:
        //cout << "Terima Kasih Telah Menggunakan Aplikasi Kami :)" << endl;
        break;
    default:
        cout << "Pilihan Tidak Tersedia/Tidak Valid" << endl;
        break;
    }
}
//MenuAdmin Implementasi
void MenuAdmin(){
    int pilihan;
    cout << "Menu Admin" << endl;
    cout << "1. Menu Film" << endl;
    cout << "2. Menu Studio" << endl;
    cout << "3. Menu Jadwal" << endl;
    cout << "4. Menu Member" << endl;
    cout << "0. Beranda/Menu Utama \n";
    cout << "Masukkan Pilihan: ";
    cin >> pilihan;
    switch(pilihan){
    case 1:
        MenuFilm();
        break;
    case 2:
        MenuStudio();
        break;
    case 3:
        MenuJadwal();
        break;
    case 4:
        MenuMember();
        break;
    case 0:
        //cout << "Terima Kasih Telah Menggunakan Aplikasi Kami :)" << endl;
        break;
    default:
        cout << "Pilihan Tidak Tersedia/Tidak Valid" << endl;
        break;
    }
}
//MasterMenu Implementasi
void MasterMenu(){
    int pilihan;
    cout << "Master Menu" << endl;
    cout << "1. Menu Admin" << endl;
    cout << "2. Menu Member" << endl;
    cout << "0. Beranda/Menu Utama \n";
    cout << "Masukkan Pilihan: ";
    cin >> pilihan;
    switch(pilihan){
    case 1:
        MenuAdmin();
        break;
    case 2:
        MenuMember();
        break;
    case 0:
        //cout << "Terima Kasih Telah Menggunakan Aplikasi Kami :)" << endl;
        break;
    default:
        cout << "Pilihan Tidak Tersedia/Tidak Valid" << endl;
        break;
    }
}

