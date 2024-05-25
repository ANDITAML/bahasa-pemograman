#include <iostream>  // Menyertakan pustaka standar untuk input dan output

using namespace std;  // Menggunakan namespace std untuk menghindari penulisan std:: sebelum fungsi standar

int main() {  // Fungsi utama program
    int angka1, angka2;  // Mendeklarasikan dua variabel integer untuk menyimpan angka yang dimasukkan pengguna

    // Meminta pengguna memasukkan angka pertama
    cout << "masukan angka pertama : ";
    cin >> angka1;

    // Meminta pengguna memasukkan angka kedua
    cout << "masukan angka kedua : ";
    cin >> angka2;

    // Menampilkan hasil penjumlahan kedua angka
    cout << "penjumlahan : " << angka1 + angka2 << endl;

    // Menampilkan hasil pengurangan kedua angka
    cout << "pengurangan : " << angka1 - angka2 << endl;

    // Menampilkan hasil perkalian kedua angka
    cout << "perkalian : " << angka1 * angka2 << endl;

    // Menampilkan hasil pembagian kedua angka
    // Pastikan tidak ada pembagian dengan nol
    if (angka2 != 0) {
        cout << "pembagian : " << angka1 / angka2 << endl;
    } else {
        cout << "pembagian : Tidak dapat membagi dengan nol" << endl;
    }

    return 0;  // Mengembalikan nilai 0 menandakan bahwa program telah selesai dijalankan dengan sukses
}
