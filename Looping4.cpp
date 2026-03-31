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