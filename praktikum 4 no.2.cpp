#include <iostream>
using namespace std;

int main (){
    string user;
    string password;

    cout << "Masukkan Username : ";
    cin >> user;

    cout << "Masukkan Password : ";
    cin >> password;

    if (user == "Bayu"){
        if (password == "Lydia"){
            cout << "Username dan password sesuai, login berhasil" << endl;
        }else{
            cout << "Username sesuai, password tidak sesuai mohon coba kembali" << endl;
    }
    }else{
        if (password == "Lydia"){
            cout << "Password sesuai, username tidak sesuai mohon coba kembali" << endl;
        }else{
            cout << "Username dan password tidak sesusai, coba kembali" << endl;
        }
    }
    return 0;

}

