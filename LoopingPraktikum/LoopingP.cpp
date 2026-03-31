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

     int a = 0, b = 1, c;

    while (a <= n) {
        if (a == n) {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}
// ===== Prosedur Input =====
void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> angka;
}
// ===== Prosedur Output Prima =====
void tampilPrima() {
    if (isPrima(angka)) {
        cout << angka << " adalah bilangan prima.\n";
    } else {
        cout << angka << " bukan bilangan prima.\n";
    }
}
// ===== Prosedur Output Fibonacci =====
void tampilFibonacci() {
    if (isFibonacci(angka)) {
        cout << angka << " termasuk bilangan Fibonacci.\n";
    } else {
        cout << angka << " bukan bilangan Fibonacci.\n";
    }
}
// ===== Function Menu =====
void tampilMenu() {
    cout << "\n===== MENU =====\n";
    cout << "1. Cek Bilangan Prima\n";
    cout << "2. Cek Bilangan Fibonacci\n";
    cout << "0. Keluar\n";
    cout << "Pilih menu: ";
}
// ===== Main =====
int main() {
    while (true) {
        tampilMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                inputAngka();
                tampilPrima();
                break;

        case 2:
                inputAngka();
                tampilFibonacci();
                break;

        case 0:
                cout << "Program selesai.\n";
                return 0;