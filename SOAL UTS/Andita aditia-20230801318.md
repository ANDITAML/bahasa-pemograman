# nama: Andita aditia
# nim: 20230801318

# SOAL 1
### jelaskan secara singkat apa itu paradikma dalam bahasa pemograman?
# jawaban : 
## Paradigma dalam bahasa pemrograman adalah cara atau gaya yang digunakan dalam menulis dan mengorganisasi kode program. Paradigma mencerminkan metode atau filosofi pemrograman yang berbeda, dan setiap paradigma memiliki prinsip dan konsep yang khas.


# SOAL 2
### Jelaskan apa yang di maksud denghan model data, operator, seleksi dan fungsi 
# jawaban :
## Dalam pemrograman, istilah-istilah model data, operator, seleksi, dan fungsi merujuk pada konsep-konsep dasar yang digunakan untuk menulis dan mengorganisasi kode. 


# SOAL 3
### Jelaskan konsep perulangan pernyataaan (looping statement) di bawah ini
intn, _, i,_;
cout << "masukan jumlah baris : ";
cin >> n;
for (i = l; i <=_; i++){
    for (s = i; _ <n; _++)
    cout << " ";
    for (j = 1; _<= i; _++)
    cout << "*";
    cout << "\n";
}
pecahan perulangan di ataas, berikan penjelasan terhadap program tersebut dan keluarkan dariprogram tersebut 
# jawaban
#include <iostream>
using namespace std;

int main() {
    int n, i, j, s;
    cout << "masukan jumlah baris : ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (s = i; s < n; s++)
            cout << " ";
        for (j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}




# SOAL 4 
### Buatalah preogram sederhana dengan hasil akhir  seperti berikut
g++ soal.cc -o soal4 && ./soal4
berartio usia kalian 21 tahun
# jawaban :
#include <iostream>  // Menyertakan pustaka standar untuk input dan output

using namespace std;  // Menggunakan namespace std untuk menghindari penulisan std:: sebelum fungsi standar

int main() {  // Fungsi utama program
    int usia = 21;  // Mendeklarasikan variabel usia dengan nilai 21
    cout << "berarti usia kalian " << usia << " tahun" << endl;  // Menampilkan pesan ke layar
    return 0;  // Mengembalikan nilai 0 menandakan bahwa program telah selesai dijalankan dengan sukses
}


# SOAL 5
### Buatalah preogram sederhana dengan hasil akhir  seperti berikut
g++ soal5.cc -o soal5 && ./soal5
masukan angka pertama : 10
masukan angka kedua : 2
penjumlahan : 12
pengurangan : 8
perkalian :20
pembagian : 5
# jawaban :
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


# SOAL 6
### Lengkapi penggalan soerce code brikut sehingga bisa berfungsi dengan baik:
{
    menu();
	tambah();
	kurang();
	kali();
	bagi();
	return 0;
}
# jawaban :
## #include <iostream>
#include <iostream>
using namespace std;

// Deklarasi fungsi-fungsi
void tambah(int a, int b) {
    cout << "Hasil dari " << a << " + " << b << " = " << (a + b) << endl;
}

void kurang(int a, int b) {
    cout << "Hasil dari " << a << " - " << b << " = " << (a - b) << endl;
}

void kali(int a, int b) {
    cout << "Hasil dari " << a << " * " << b << " = " << (a * b) << endl;
}

void bagi(int a, int b) {
    if (b != 0) {
        cout << "Hasil dari " << a << " / " << b << " = " << (a / b) << endl;
    } else {
        cout << "Error: Tidak bisa membagi dengan nol." << endl;
    }
}

int main() {
    int pilih, angka1, angka2;
    cout << "SISTEM OPERASI" << endl;
    cout << "Menu" << endl;
    cout << "1. Tambah" << endl;
    cout << "2. Kurang" << endl;
    cout << "3. Kali" << endl;
    cout << "4. Bagi" << endl;
    cout << "Input (pilih): ";
    cin >> pilih;

    cout << "Input angka pertama: ";
    cin >> angka1;
    cout << "Input angka kedua: ";
    cin >> angka2;

    switch (pilih) {
        case 1:
            tambah(angka1, angka2);
            break;
        case 2:
            kurang(angka1, angka2);
            break;
        case 3:
            kali(angka1, angka2);
            break;
        case 4:
            bagi(angka1, angka2);
            break;
        default:
            cout << "Pilihan tidak ada!" << endl;
    }

    cout << "Hasil dari operasi Matematika" << endl;
    return 0;
}

# soal 7
### buatlah diagram alur/flow yang seseuai dengan source code yang anda lengkapi (soal nomer 6)

# jawaban :