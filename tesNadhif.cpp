#include <iostream>
#include <string>

// Fungsi untuk menghitung luas persegi panjang
// Menggunakan tipe data float dan double
float hitungLuasPersegiPanjang(float panjang, double lebar) {
    return panjang * lebar;
}

// Fungsi untuk menampilkan hobi
// Menggunakan tipe data char dan string
void tampilkanHobi(char jenisKelamin, std::string hobi) {
    std::cout << "Jenis Kelamin Anda: " << jenisKelamin << std::endl;
    std::cout << "Hobi Anda: " << hobi << std::endl;
}

int main() {
    // Deklarasi variabel dengan berbagai tipe data
    int usia;
    float panjang, lebar;
    std::string nama, hobi;
    char jenisKelamin;

    // Percabangan dan input/output
    std::cout << "Selamat datang! Silakan isi data diri Anda." << std::endl;
    std::cout << "Masukkan nama Anda: ";
    std::getline(std::cin, nama);

    std::cout << "Masukkan usia Anda: ";
    std::cin >> usia;

    // Percabangan sederhana berdasarkan usia
    if (usia >= 17) {
        std::cout << "Anda sudah bisa memiliki KTP." << std::endl;
    } else {
        std::cout << "Anda belum bisa memiliki KTP." << std::endl;
    }
    
    // Membersihkan buffer input
    std::cin.ignore();
    
    std::cout << "Masukkan jenis kelamin Anda (L/P): ";
    std::cin >> jenisKelamin;
    
    // Menggunakan perulangan untuk input hobi
    std::cout << "Silakan sebutkan hobi Anda (ketik 'selesai' jika sudah): " << std::endl;
    std::string inputHobi;
    while (std::getline(std::cin, inputHobi) && inputHobi != "selesai") {
        hobi += inputHobi + ", ";
    }
    
    // Memanggil fungsi tampilkanHobi
    tampilkanHobi(jenisKelamin, hobi);

    std::cout << "\nSekarang, mari kita hitung luas persegi panjang." << std::endl;
    std::cout << "Masukkan panjang: ";
    std::cin >> panjang;
    std::cout << "Masukkan lebar: ";
    std::cin >> lebar;

    // Memanggil fungsi hitungLuasPersegiPanjang dan menampilkannya
    float luas = hitungLuasPersegiPanjang(panjang, lebar);
    std::cout << "Luas persegi panjang adalah: " << luas << std::endl;

    return 0;
}