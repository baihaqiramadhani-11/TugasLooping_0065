#include <iostream>
using namespace std;

// =============================================
// VARIABEL GLOBAL
// =============================================
int angka = 0;
int pilihan = 0;

// =============================================
// FUNCTION PENGECEKAN
// =============================================

// Function untuk mengecek bilangan prima menggunakan while loop
bool isPrima(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;

     int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

// Function untuk mengecek bilangan Fibonacci menggunakan while loop
bool isFibonacci(int n) {
    if (n < 0) return false;
    if (n == 0 || n == 1) return true;

    int a = 0, b = 1, c;
    while (true) {
        c = a + b;
        if (c == n) return true;
        if (c > n) return false;
        a = b;
        b = c;
    }
}

// =============================================
// PROSEDURAL (VOID FUNCTION)
// =============================================

// Prosedur untuk menerima input angka
void inputAngka() {
    cout << "Masukkan angka yang ingin dicek: ";
    cin >> angka;
}

/ Prosedur untuk menampilkan hasil pengecekan prima
void tampilHasilPrima() {
    cout << "\nHasil : ";
    if (isPrima(angka))
        cout << angka << " adalah bilangan PRIMA." << endl;
    else
        cout << angka << " BUKAN bilangan prima." << endl;
}