#include<iostream>

using namespace std;
int main(){
    
    int bentukRuang;
    string menu[2] = {"piramida" , "persegi"};

    early:
        cout << "menu terminal :\n";
        cout << "1. " << menu[0] << endl;
        cout << "2. " << menu[1] << endl;
        cout << "silahkan memilih bangun ruang yang diinginkan (1/2): ";
        cin >> bentukRuang;

        switch (bentukRuang) {
            case 1 : {
                int ukuranPiramida, a, b, c;
                cout << "masukkan ukuran piramida : ";
                cin >> ukuranPiramida;
                cout << endl;

                for (int a = 1; a <= ukuranPiramida; a++){
                    
                    for (int b = 1; b <= ukuranPiramida - a; b++){
                        cout << " ";
                    }
                    for (int c = 1; c <= (2 * a - 1); c++){
                    cout << "*";
                    }
                    cout << endl;
                }
            } goto early;
            case 2 : {
                int ukuranPersegi = 0;
                cout << "masukkan ukuran persegi : ";
                cin >> ukuranPersegi;
                for (int i = 0; i < ukuranPersegi; i++){
                    for (int j = 0; j < ukuranPersegi; j++){
                        cout << "* ";
                }
                cout << endl;
            } 
        } 
    } goto early;
    return 0;
}