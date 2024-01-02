#include <iostream>
#include "FungsiAnu.h"

int main(){
    static_value();
    int pilihan;
    int ulang = 0;
    while(ulang < 1){
        cout << "#=================Hell-0 User!=================# \n";
        cout << "                    -TOT ID-                \n";
        cout << "#================Selamat Datang================# \n\n";
        cout << "*----------Beranda/Menu Utama----------* \n";
        cout << "1. Bioskop \n";
        cout << "2. Member \n";
        cout << "3. Riwayat Transaksi \n";
        cout << "0. EXIT \n";
        cout << endl;
        cout << "Masukkan Pilihan Anda: ";
        cin >> pilihan;
        switch(pilihan){
        case 1:
            int bioskop;
            cout << "*----------Bioskop----------* \n\n";
            cout << "1. Film \n";
            cout << "2. Studio \n";
            cout << "3. Jadwal \n";
            cout << "0. Beranda/Menu Utama \n";
            cout << endl;
            cout << "Masukkan Pilihan Anda: ";
            cin >> bioskop;
            if(bioskop >= 1 && bioskop <= 3){
                if(bioskop == 1){
                    cout << "*----------Film----------* \n\n";
                    MenuFilm();
                    break;
                }else if(bioskop == 2){
                    cout << "*----------Studio----------* \n\n";
                    MenuStudio();
                    break;
                }else if(bioskop == 3){
                    cout << "*----------Jadwal----------* \n\n";
                    MenuJadwal();
                    break;
                }else if(bioskop == 0){
                    ulang = 1;
                }
            }else if(bioskop != 0){
                cout << endl;
                cout << "Sementara Pilihan Bioskop Hanya 3 Mon Maap! \n";
            }
            break;
        case 2:
            cout << "*----------Member----------* \n\n";
            MenuMember();
            break;
        case 3:
            cout << endl;
            cout << "---!!COMING SOON BIATCHH!!--- \n";
            ulang = 1;
            break;
        case 0:
            ulang = 1;
            cout << "*----------------------------------------------* \n";
            cout << "                    ==EXIT==                     \n";
            break;
        default:
            break;
        }
    }

    return 0;
}
