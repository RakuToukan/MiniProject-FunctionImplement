#include <iostream>
using namespace std;

// Fungsi untuk operasi
int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}

double bagi(int a, int b) {
    if (b == 0) {
        cout << "Error: pembagi tidak boleh nol!" << endl;
        return 0;
    }
    return (double)a / b;
}

int main() {
    int pilihan, x, y;
    char ulang;
    string invalid = "Input tidak valid! \n";
    do {

        cout << "=== KALKULATOR SEDERHANA ===" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        cout << "Masukkan angka pertama: ";
        if (!(cin >> x)){
            cout << invalid;
            break;
        };
        cout << "Masukkan angka kedua: ";
         if (!(cin >> y)){
            cout << invalid;
            break;
        };

        // cek apakah input valid

        // Percabangan
        switch (pilihan) {
            case 1:
                cout << "Hasil: " << tambah(x, y) << endl;
                break;
            case 2:
                cout << "Hasil: " << kurang(x, y) << endl;
                break;
            case 3:
                cout << "Hasil: " << kali(x, y) << endl;
                break;
            case 4:
                cout << "Hasil: " << bagi(x, y) << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }

        cout << "Hitung lagi? (y/n): ";
        cin >> ulang;

    // Perulangan
    } while (ulang == 'y' || ulang == 'Y');

    cout << "Program selesai." << endl;
    return 0;
}
