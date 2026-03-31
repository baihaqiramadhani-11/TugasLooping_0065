#include <iostream>
using namespace std;

// ===== Variabel Global =====
int angka;
int pilihan;

// ===== Function Cek Prima =====
bool isPrima(int n) {
    if (n <= 1) return false;

    int i = 2;
    while (i <= n / 2) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}
// ===== Function Cek Fibonacci =====
bool isFibonacci(int n) {
    if (n < 0) return false;