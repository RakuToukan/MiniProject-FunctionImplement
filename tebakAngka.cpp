#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    // Mengambil angka rahasia secara acak antara 1 dan 100
    int angkaRahasia = rand() % 101;
    int tebakan;
    int percobaan = 0;

    cout << "=== Tebak Angka Random ===" << endl;
    cout << "Pilih angka antara 1 dan 100. Coba tebak!" << endl;

    do {
        cout << "Masukkan tebakan Anda: ";
        cin >> tebakan;
        percobaan++;

        // Memeriksa apakah input valid
      if (tebakan < 1 || tebakan > 100) {
            cout << "Input harus antara 1 dan 100." << endl;
            continue;
            percobaan--;
        }

        // Memberikan petunjuk
        if (tebakan == angkaRahasia) {
            cout << "Terlalu tinggi! Coba lagi." << endl;
        } else if (tebakan < angkaRahasia) {
            cout << "Terlalu rendah! Coba lagi." << endl;
        } else {
            cout << "Selamat! Anda menebak dengan benar." << endl;
            cout << "Anda berhasil dalam " << percobaan << " kali percobaan." << endl;
        }
    } while (tebakan != angkaRahasia);

    return 0;
}