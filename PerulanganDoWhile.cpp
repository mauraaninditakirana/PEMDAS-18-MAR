#include <iostream>
using namespace std;

int main(){
    char pilihan;

    do{
        cout << "Berangkat ambil takjil" << endl;
        cout << "Antri takjil" << endl;
        cout << "Ambil takjil" << endl;
        cout << "Apakah takjil msih ada ?" << endl;
        cin >> pilihan;

        
    }while(pilihan == 'y' || pilihan == 'Y');
}