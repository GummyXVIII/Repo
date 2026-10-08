// Bai 1: Nhap day N phan tu, tinh tong cac phan tu.
#include <iostream>
#include <vector>
using namespace std;


long long tinhTong(const vector<int>& a) {
    long long tong = 0;                 
    for (size_t i = 0; i < a.size(); i++)
        tong += a[i];
    return tong;
}

int main() {
    int n;
    cout << "Nhap N: ";
    if (!(cin >> n) || n < 0) {
        cout << "N khong hop le!\n";
        return 1;
    }
    vector<int> a(n);
    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Tong cac phan tu = " << tinhTong(a) << "\n";
    return 0;
}
