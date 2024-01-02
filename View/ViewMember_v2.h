#include "../Model/ModelMember_v2.h"
#include <iostream>
#include <string>
using namespace std;

void vAddMember(){
    string inpnama, inpnoTelp, inpemail, inppassword;
    cout << "Masukkan Nama: ";
    cin >> inpnama;
    cout << "Masukkan No. Telp: ";
    cin >> inpnoTelp;
    cout << "Masukkan Email: ";
    cin >> inpemail;
    cout << "Masukkan Password: ";
    cin >> inppassword;
    mAddMember(inpnama, inpnoTelp, inpemail, inppassword);
}
void vViewMembers(){
    mViewMember();
}
void vSearchMember(){
    string inpnoTelp;
    cout << "Masukkan No. Telp: ";
    cin >> inpnoTelp;
    int index = mSearchMember(inpnoTelp);
    if(index != -1){
        cout << "Data Member" << endl;
        cout << "====================================================================" << endl;
        cout << "Nama\t\tNo. Telp\t\tEmail\t\tPassword" << endl;
        cout << "====================================================================" << endl;
        cout << namaMember[index] << "\t\t" << noTelp[index] << "\t" << email[index] << "\t\t" << password[index] << endl;
        cout << "====================================================================" << endl;
    }else{
        cout << "No. Telp Tidak di Temukan" << endl;
    }
}
void vUpdatePass(){
    string inpnoTelp, inppassword;
    cout << "Masukkan No. Telp: ";
    cin >> inpnoTelp;
    cout << "Masukkan Password Baru: ";
    cin >> inppassword;
    mUpdatePass(inpnoTelp, inppassword);
}
