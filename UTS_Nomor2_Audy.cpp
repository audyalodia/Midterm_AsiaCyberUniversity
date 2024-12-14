/*
Nama: Audy Alodia Melizard
NIM: 240401010097
Kelas: IF105
Mata Kuliah: Algoritma dan Pemrograman
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Deklarasi fungsi untuk menghitung tunjangan jabatan
double SumTunjanganJabatan(int golongan){
    double tunjangan1 = 0; // set nilai awal
    switch(golongan){
        case 1:
        tunjangan1 = 0.05 * 3500000;
        break;
        case 2:
        tunjangan1 = 0.10 * 3500000;
        break;
        case 3:
        tunjangan1 = 0.15 * 3500000;
        break;
        default:
        cout << "Golongan tidak valid, pilih golongan 1 sampai 3." << endl;
        break;
    }
    return tunjangan1;
}

// Deklarasi fungsi untuk menghitung tunjangan pendidikan
double SumTunjanganPendidikan(int pendidikan){
    double tunjangan2 = 0; // set nilai awal
    switch(pendidikan){
        case 1: 
        tunjangan2 = 0.025 * 3500000;
        break;
        case 2: 
        tunjangan2 = 0.05 * 3500000;
        break;
        case 3:
        tunjangan2 = 0.075 * 3500000;
        break;
        default: 
        cout << "Pendidikan tidak valid, pilih 1 sampai 3." << endl;
        break; 
    }
    return tunjangan2;
}

/*
Deklarasi fungsi untuk menghitung honor lembur, saya asumsikan satu minggu 40 jam kerja normal
dimana satu bulan jam kerja normal adalah 160 jam.
*/ 
double SumHonorLembur(int jamkerja){
    const int normalWorkHour = 160;
    double SumhonorLembur = 0; // set nilai awal
    if (jamkerja > normalWorkHour) {
        int jamLembur = jamkerja - normalWorkHour;
        SumhonorLembur = jamLembur * 12500;
    }
    return SumhonorLembur;
}

int main(){
    string name;
    int golongan, pendidikan, workingHour;
    char choices;

    // Input data oleh user
    do{
        cout << "Program Hitung Honor Karyawan Kontrak PT. DINGIN DAMAI" << endl;
        cout << "Nama Karyawan \t \t \t: ";
        getline(cin, name);
        // Validasi golongan
        do{
            cout << "Golongan \t \t \t: ";
            cin >> golongan;
            if(golongan<1||golongan>3){
                cout << "Golongan tidak valid, pilih 1 sampai 3." << endl;
            }
        } 
        while (golongan<1||golongan>3);
        // Validasi jenjang pendidikan
        do{
            cout << "Pendidikan (SMU/D3/S1)\t\t: ";
            cin >> pendidikan;

            if (pendidikan <1||pendidikan>3){
                cout << "Pendidikan tidak valid, pilih lagi." << endl;
            } 
        } while (pendidikan <1||pendidikan>3);
        // Validasi jam kerja
        do{
            cout << "Jumlah Jam Kerja \t\t: ";
            cin >> workingHour;
            if (workingHour < 1){
                cout << "Jam kerja tidak valid." << endl;
            }
        } while (workingHour<1);

        // Perhitungan gaji
        double gajiTetap = 3500000;
        double tunjanganJabatan = SumTunjanganJabatan(golongan);
        double tunjanganPendidikan = SumTunjanganPendidikan(pendidikan);
        double honorLembur = SumHonorLembur(workingHour);
        double sumHonor = gajiTetap + tunjanganJabatan + tunjanganPendidikan + honorLembur;

        // Output hasil perhitungan
        cout << fixed << setprecision(0); // Agar hasil bulat dan bukan desimal
        cout << " " << endl;
        cout << "Karyawan yang bernama \t: " << name << endl;
        cout << " " << endl;
        cout << "Honor yang diterima" << endl;
        cout << "Honor Tetap\t\tRp. " << gajiTetap << endl;
        cout << "Tunjangan Jabatan\tRp. " << tunjanganJabatan << endl;
        cout << "Tunjangan Pendidikan\tRp. " << tunjanganPendidikan << endl;
        cout << "Honor Lembur\t\tRp. " << honorLembur << endl;
        cout << " \t\t\t--------------------+" << endl;
        cout << "Honor Yang Diterima\tRp. " << sumHonor << endl; 
        // Perulangan pertanyaan
        cout << " " << endl;
        cout << "Hitung ulang Honor Karyawan Lainnya (Y/N)? ";
        cin >> choices;
        cin.ignore(); // Clean up buffer input
    } while (choices == 'Y');

    cout << "Terima kasih telah menggunakan program ini." << endl;

    return 0;
}