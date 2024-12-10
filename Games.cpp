#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayBoard(char board[3][3]){
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " | " << endl;
    cout << "-----------\n";
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " | " << endl;
    cout << "-----------\n";
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " | " << endl;
    cout << "-----------\n"; 
} 

int main () {

string name1, name2;
    cout << "dalam permainan ini hanya bisa dimainkan oleh 2 orang.\n";
    cout << "nama player 1 : ";
    cin >> name1;
    cout << "nama player 2 : ";
    cin >> name2;
        
string correctPassword = "galih002";
string password;
int attempts = 3;
bool accesGranted = false;
cout << "selamat datang di program ini !\nuntuk melanjutkan, silahkan masukkan password !" << endl;
    while ( attempts >= 0 && attempts <= 3){
    cout << "password : ";
    // getline(cin, password);
    // cin.ignore()
    cin >> password;    
        if (password == correctPassword){
            cout << "password diterima, silahkan masuk." << endl;
            accesGranted = true;
            break;
        } else {
        attempts--;
            cout << "password salah, kesempatan tersisa " << attempts << " silahkan coba kembali" << endl;
        } if (attempts == 0) {
            cout << "kesempatan habis, silahkan coba lagi nanti";
    return 1;
    }
}
string correctName = "galih";
string name;
    cout << "siapa namamu? : " << endl;
    getline(cin,name);
    cin >> name;
    if ( name == correctName ) {
        cout << "selamat datang, " << name << "!\n";
    } else {
        cout << "anda masuk sebagai tamu !\n";
    }
cout << "menu terminal :\n";
string menu[4] = {"kalkulator sederhana", "tebak angka", "penghitung nilai rata-rata", "Tic-Tac-Toe"};
int angka;
    cout << "1." << menu[0] << endl;
    cout << "2." << menu[1] << endl;
    cout << "3." << menu[2] << endl;
    cout << "4." << menu[3] << endl;
cout << "silahkan pilih menu 1-4 untuk melanjutkan program : ";
cin >> angka;
switch (angka){
    case 1 :{
    cout << "selamat datang di " << menu[0] << " galih !\n";
        int a = 0, b = 0;
        char op;
        cout << "silahkan masukkan angka :\n";
        cin >> a;
        cout << "masukkan angka kedua :\n";
        cin >> b;
        cout << "masukkan operator :\n";
        cin >> op;
            switch (op){
                case ('+') :
                cout << "hasilnya adalah : " << a+b << endl;
                break;
                case ('-') :
                cout << "hasilnya adalah : " << a-b << endl;
                break;
                case ('*') :
                cout << "hasilnya adalah : " << a*b << endl;
                break;
                case ('/') :
                cout << "hasilnya adalah : " << a/b << endl;
                break;
                default :
                cout << "operator tidak valid, hasil tidak ditemukan.\n";
                break;
            }
        }
    case 2 : {
    cout << "selamat datang di game " << menu [1] << " galih !\n";
    int corrrectAngka = 5;
    int percobaan = 3;
    char start;
    char y,n;
    int number;
        cout << "di game ini kamu harus menebak angka yang dikeluarkan program.\nkamu diberi kesempatan 3 kali  untuk menginput nilai yang benar\n";
        srand(time(0));
        int angkaAcak = rand() %10; 
        cout << "mulai permainan? (y/n)" << endl;
        cin >> start;
            if (start == 'y'){
                cout << "\ngame dimulai !\naku angka yang berada di kisaran angka 1 sampai 9, angka berapakah aku?\n ";
            } else { 
                cout << "game dibatalkan.\n";
                return 1;
            }
            while(percobaan >= 0 && percobaan <= 3){
                cout << "tebak angka : ";
                cin >> number;
                if(number == angkaAcak){
                    cout << "selamat tebakan anda benar !\n";
                    break;
                } else {
                    percobaan--;
                    cout << "salah, percobaan tersisa " << percobaan << endl;
                } if (percobaan == 0){
                    cout << "percobaan habis, game over.\njawabanya adalah : " << angkaAcak;
                    return 1;
                } 
            }
        }
    break;
    case 3 : {
        cout << "selamat datang di " << menu[2] << " galih!\n";
        int number, angka = 0, count = 0;
        cout << "masukkan angka 0 sebelum diinput : \nmasukkan angka : ";
        do {
            cin >> number;
            if (number != 0){
                angka += number;
                count ++;
            }
        } while (number != 0);
        if (count > 0) {
            int average = angka / count;
            cout << "hasil dari penjumlahan nya adalah : " << angka << "\nrata-rata ";
            cout << "hasilnya adalah : " << average << endl;
        } else {
            cout << "tidak ada angka yang dimasukkan";
        }
        break;
    }
    case 4 : {
        cout << "selamat datang di game " << menu[3] << " galih!\n";
        char board[3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};    
displayBoard(board);
int playerTurn = 1;
int choice;
char currentMarker;

while(true){
    currentMarker = (playerTurn == 1) ? 'X' : 'O';
    
    cout << "pemain" << playerTurn << " (" << currentMarker << "), masukkan angka untuk memilih posisi : ";
    cin >> choice;

        if (choice == 1) board [0][0] = currentMarker;
        else if (choice == 2) board [0][1] = currentMarker;
        else if (choice == 3) board [0][2] = currentMarker;
        else if (choice == 4) board [1][0] = currentMarker;
        else if (choice == 5) board [1][1] = currentMarker;
        else if (choice == 6) board [1][2] = currentMarker;
        else if (choice == 7) board [2][0] = currentMarker;
        else if (choice == 8) board [2][1] = currentMarker;
        else if (choice == 9) board [2][2] = currentMarker;
    
        displayBoard(board);

        playerTurn = (playerTurn == 1) ? 2 : 1;
        }
    }   
}
return 0;
}