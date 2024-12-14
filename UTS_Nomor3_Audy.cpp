/*
Nama: Audy Alodia Melizard
NIM: 240401010097
Kelas: IF105
Mata Kuliah: Algoritma dan Pemrograman
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    char merkSusu, besarKaleng;
    char choices;
    int sumPembelian;
    double hargaSusu, sumPayment;

    do
    {
        // Setting up menu 
        cout << "TOKO KELONTONG KERONCONGAN" << endl;
        cout << "--------------------------" << endl;
        cout << "\nA. Susu Dancow" << endl;
        cout << "   1. Ukuran Kecil" << endl;
        cout << "   2. Ukuran Sedang" << endl;
        cout << "   3. Ukuran Besar" << endl;
        cout << "B. Susu Bendera" << endl;
        cout << "   1. Ukuran Kecil" << endl;
        cout << "   2. Ukuran Sedang" << endl;
        cout << "   3. Ukuran Besar" << endl;
        cout << "C. Susu SGM" << endl;
        cout << "   1. Ukuran Kecil" << endl;
        cout << "   2. Ukuran Sedang" << endl;
        cout << "   3. Ukuran Besar" << endl;

        // Input brand susu oleh user
        cout << "Masukan Jenis Susu\t: ";
        cin >> merkSusu;
        while (merkSusu != 'A' && merkSusu != 'B' && merkSusu != 'C'){
            cout << "Brand susu tidak dikenali. Pilih A, B, atau C." << endl;
            cout <<"Masukkan Jenis Susu\t: ";
            cin >> merkSusu;
        }

        // Input ukuran kaleng susu oleh user
        cout << "Masukan Ukuran Kaleng\t: ";
        cin >> besarKaleng;
        while (besarKaleng != '1' && besarKaleng != '2' && besarKaleng != '3'){
            cout << "Ukuran kaleng tidak valid. Pilih 1, 2, atau 3." << endl;
            cout << "Masukan Ukuran Kaleng\t: ";
            cin >> besarKaleng;
        }

        // Setting up harga susu berdasarkan brand dan ukuran
        if (merkSusu == 'A'){
            if (besarKaleng == '1'){
                hargaSusu = 15000;
            }
            else if (besarKaleng == '2'){
                hargaSusu = 20000;
            }
            else
            hargaSusu = 25000;
        } 
        else if (merkSusu == 'B'){
            if (besarKaleng == '1'){
                hargaSusu = 13500;
            }
            else if(besarKaleng =='2'){
                hargaSusu = 17500;
            }
            else
            hargaSusu = 20000;
        } 
        else if (merkSusu == 'C'){
            if (besarKaleng == '1'){
                hargaSusu = 15000;
            }
            else if (besarKaleng == '2'){
                hargaSusu = 18500;
            }
            else
            hargaSusu = 22000;
        }

        // Proses dan output hasil perhitungan
        cout << "Harga Satuan Barang\tRp. " << hargaSusu << endl;
        cout << "Jumlah Yang Dibeli\t: ";
        cin >> sumPembelian;

        sumPayment = hargaSusu * sumPembelian;

        cout << "Harga Yang Harus Dibayar Sebesar Rp. " << sumPayment << endl;
        
        // Perulangan pertanyaan
        cout << "Ingin hitung transaksi lainnya (Y/N)? ";
        cin >> choices;
        cin.ignore(); // Clean up buffer input
        
    } while (choices == 'Y');

    cout << "Terima kasih telah menggunakan program ini." << endl;
    return 0;

}