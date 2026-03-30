#include <iostream>
using namespace std;

// Deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// prosedur input
void input() {
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" << endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}



// prosedur output
void output() {
    cout << "\n=== HASIL SELEKSI ===" << endl;
    cout << "Jurusan Pilihan : " << namaJurusan << endl;
    cout << "Status Kuota    : " << statusKuota << endl;
    cout << "-----------------------------------" << endl;
}

int main() {
    input();
    pilihanJurusan();
    output();

    return 0;
}