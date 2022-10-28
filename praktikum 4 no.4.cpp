#include <iostream>
using namespace std;

int main (){
    int menu;
    int harga1 = 5000, harga2 = 7000, harga3 = 4500, harga4 = 4000;

    cout << "   Daftar menu" << endl;
    cout << "==============================" << endl;
    cout << "1. Nasi goreng informatika : " << harga1 << endl;
    cout << "2. Nasi soto ayam internet : " << harga2 << endl;
    cout << "3. Gado gado Disket : " << harga3 << endl;
    cout << "4. Bubur ayam LAN : " << harga4 << endl;
    cout << "==============================" << endl;
    cout << "Masukkan pilihan Anda : ";
    cin >> menu;

    cout << " " << endl;

    if (menu==1){
        cout << " Pilihan No.1 Nasi goreng informatika : " << harga1 << endl;
    }else if (menu==2){
        cout << "Pilihan No.2 Nasi soto ayam Informatika : " << harga2 << endl;
    }else if (menu==3) {
        cout << "Pilihan No.3 Gado gado Disket : " << harga3 << endl;
    }else if (menu==4){
        cout << "Pilihan No.4 Bubur ayam LAN : " << harga4 << endl;
    }else{
        cout << "Pilihan Anda salah" << endl;
    }

    return 0;
}
