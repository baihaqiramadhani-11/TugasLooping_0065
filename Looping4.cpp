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

// Prosedur untuk menampilkan hasil pengecekan Fibonacci
void tampilHasilFibonacci() {
    cout << "\nHasil : ";
    if (isFibonacci(angka))
        cout << angka << " termasuk dalam deret FIBONACCI." << endl;
    else
        cout << angka << " TIDAK termasuk dalam deret Fibonacci." << endl;
}

// Function untuk menampilkan menu
void tampilMenu() {
    cout << "\n=========================================" << endl;
    cout << "       PROGRAM CEK BILANGAN" << endl;
    cout << "=========================================" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar Program" << endl;
    cout << "=========================================" << endl;
    cout << "Pilih menu (0-2): ";
}

// =============================================
// MAIN FUNCTION
// =============================================
int main() {

    while (true) {
        tampilMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                inputAngka();
                tampilHasilPrima();
                break;

            case 2:
                inputAngka();
                tampilHasilFibonacci();
                break;