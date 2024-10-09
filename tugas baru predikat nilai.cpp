#include <iostream>
using namespace std;

// Definisikan fungsi untuk menghitung rata-rata dan predikat
string rata_rata_predikat(int quis, int uts, int uas, int praktik) {
  int rata_rata = (quis + uts + uas + praktik) / 4; // Hitung rata-rata
  string predikat; // Deklarasikan variabel untuk menyimpan predikat
  // Gunakan if-else untuk menetapkan predikat berdasarkan rata-rata
  if (rata_rata >= 90) {
    predikat = "A";
  }
  else if (rata_rata >= 80) {
    predikat = "B";
  }
  else if (rata_rata >= 70) {
    predikat = "C";
  }
  else if (rata_rata >= 60) {
    predikat = "D";
  }
  else {
    predikat = "Tidak Lulus";
  }
  return predikat; // Kembalikan predikat sebagai string
}

int main() {
  int quis, uts, uas, praktik; // Deklarasikan variabel untuk nilai masukan
  // Minta pengguna untuk memasukkan nilai
  cout << "masukkan nilai quis = ";
  cin >> quis;
  // Gunakan goto untuk mengulang input jika nilai tidak valid
  if (quis < 0 || quis > 100) {
    cout << "nilai quis tidak valid, masukkan lagi\n";
    goto quis;
  }
  cout << "masukkan nilai uts = ";
  cin >> uts;
  // Gunakan goto untuk mengulang input jika nilai tidak valid
  if (uts < 0 || uts > 100) {
    cout << "nilai uts tidak valid, masukkan lagi\n";
    goto uts;
  }
  cout << "masukkan nilai uas = ";
  cin >> uas;
  // Gunakan goto untuk mengulang input jika nilai tidak valid
  if (uas < 0 || uas > 100) {
    cout << "nilai uas tidak valid, masukkan lagi\n";
    goto uas;
  }
  cout << "masukkan nilai praktik = ";
  cin >> praktik;
  // Gunakan goto untuk mengulang input jika nilai tidak valid
  if (praktik < 0 || praktik > 100) {
    cout << "nilai praktik tidak valid, masukkan lagi\n";
    goto praktik;
  }
  // Panggil fungsi dan lewatkan nilai masukan sebagai argumen
  string hasil = rata_rata_predikat(quis, uts, uas, praktik);
  // Cetak hasil
  cout << "rata rata dari keempat nilai tersebut adalah " << hasil << endl;
  return 0;
}
