/*
Nama: Audy Alodia Melizard
NIM: 240401010097
Kelas: IF105
Mata Kuliah: Algoritma dan Pemrograman
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int lebar = 5;
    
    for (int row=1; row<=lebar;row++){ // Inisialisasi dan iterasi row
        for (int column=1; column<=lebar; column++){ // inisialisasi dan iterasi column
            cout << setw(4) << row * column; // Proses perhitungan perkalian kemudian output
        }
        cout << "" << endl;
    }
    return 0;
}