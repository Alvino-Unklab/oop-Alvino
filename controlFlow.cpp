#include <iostream>

using namespace std;

int main()
{
  int angka;
  cout << "Masukkan sebuah Angka: ";
  cin >> angka;

  switch(angka) {
    case 1 :  cout << "Hari ke " << angka << " adalah hari Minggu";
              break;
    case 2 :  cout << "Hari ke " << angka << " adalah hari Senin";
              break;
    case 3 :  cout << "Hari ke " << angka << " adalah hari Selasa";
              break;
    case 4 :  cout << "Hari ke " << angka << " adalah hari Rabu";
              break;
    case 5 :  cout << "Hari ke " << angka << " adalah hari Kamis";
              break;
    case 6 :  cout << "Hari ke " << angka << " adalah hari Jumat";
              break;
    case 7 :  cout << "Hari ke " << angka << " adalah hari Sabtu";
              break;
    default :  cout << "Angka yang dimasukkan diluar dari pilihan yang tersedia.";
              break;
  }

  return 0;
}