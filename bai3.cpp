// Bai 3: Nhap so n, tinh n!
#include <iostream>
using namespace std;

unsigned long long giaiThuaLap(int n) {
    unsigned long long kq = 1;
    for (int i = 2; i <= n; i++) kq *= i;
    return kq;
}

unsigned long long giaiThuaDeQuy(int n) {
    if (n <= 1) return 1;
    return n * giaiThuaDeQuy(n - 1);
}

int main() {
    int n;
    cout << "Nhap n (0 <= n <= 20): ";
    if (!(cin >> n)) {
        cout << "Gia tri khong hop le!\n";
        return 1;
    }
    if (n < 0) {
        cout << "Khong ton tai giai thua cua so am!\n";
        return 1;
    }
    if (n > 20) {
        cout << "n qua lon, 21! vuot qua gioi han unsigned long long!\n";
        return 1;
    }
    cout << n << "! (lap)     = " << giaiThuaLap(n) << "\n";
    cout << n << "! (de quy)  = " << giaiThuaDeQuy(n) << "\n";
    return 0;
}
