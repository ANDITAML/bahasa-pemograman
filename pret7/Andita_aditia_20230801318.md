# SOAL 1
### Jelaskan sesuai dengan pemahaman anda apa itu Bahasa Pemrograman?
# jawaban :
## Menurut saya adalah himpunan aturan atau instruksi yang digunakan untuk memerintah komputer agar menjalankan tugas-tugas tertentu. Bahasa pemrograman memungkinkan seorang programmer atau pengembang perangkat lunak untuk menulis kode yang dapat dijalankan oleh komputer untuk menghasilkan output yang diinginkan. Apakah ada pertanyaan lain yang ingin kamu tanyakan terkait bahasa pemrograman?

# SOAL 2
### Jelaskan berdasarkan pemahaman anda apa saja paradigma dalam Bahasa Pemrograman?
# jawaban :
## -Paradigma Berorientasi Objek (Object-Oriented Programming/OOP)
## -Paradigma Fungsional (Functional Programming)
## -Paradigma Berbasis Logika (Logic Programming)
## -Paradigma Berbasis Prosedural (Procedural Programming)
## -Paradigma Berbasis Deklaratif (Declarative Programming)

# SOAL 3
### Jelaskan type data yang anda ketahui dan berikan penjelasan terkait type data tersebut!
# jawaban :
## 
1. **Tipe Data Integer**
2. **Tipe Data Float**
3. **Tipe Data String**
4. **Tipe Data Boolean**
5. **Tipe Data Array**
6. **Tipe Data Object**
7. **Tipe Data Null**
8. **Tipe Data Undefined**


# SOAL 4
### Lengkapi Codingan Berikut:
{
    menu();
	tambah();
	kurang();
	kali();
	bagi();
	return 0;
}
# jawaban :
## #include <stdio.h>

// Deklarasi fungsi
void menu();
void tambah();
void kurang();
void kali();
void bagi();

int main() {
    menu();
    return 0;
}

void menu() {
    int pilihan;
    do {
        printf("Menu Operasi Aritmatika:\n");
        printf("1. Tambah\n");
        printf("2. Kurang\n");
        printf("3. Kali\n");
        printf("4. Bagi\n");
        printf("5. Keluar\n");
        printf("Pilih operasi (1-5): ");
        scanf("%d", &pilihan);
        
        switch(pilihan) {
            case 1:
                tambah();
                break;
            case 2:
                kurang();
                break;
            case 3:
                kali();
                break;
            case 4:
                bagi();
                break;
            case 5:
                printf("Keluar dari program.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while(pilihan != 5);
}

void tambah() {
    double a, b;
    printf("Masukkan dua angka yang akan ditambah: ");
    scanf("%lf %lf", &a, &b);
    printf("Hasil: %.2lf\n", a + b);
}

void kurang() {
    double a, b;
    printf("Masukkan dua angka yang akan dikurangkan: ");
    scanf("%lf %lf", &a, &b);
    printf("Hasil: %.2lf\n", a - b);
}

void kali() {
    double a, b;
    printf("Masukkan dua angka yang akan dikalikan: ");
    scanf("%lf %lf", &a, &b);
    printf("Hasil: %.2lf\n", a * b);
}

void bagi() {
    double a, b;
    printf("Masukkan dua angka yang akan dibagi: ");
    scanf("%lf %lf", &a, &b);
    if(b != 0) {
        printf("Hasil: %.2lf\n", a / b);
    } else {
        printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
    }
}

