// Bai 5: Nhap day so thuc do dai N. In ra cac gia tri >= gia tri trung binh cua day.
#include <iostream>
#include <vector>
using namespace std;

double trungBinh(const vector<double>& a) {
    double tong = 0;
    for (size_t i = 0; i < a.size(); i++) tong += a[i];
    return tong / a.size();
}

void inLonHonHoacBangTB(const vector<double>& a) {
    double tb = trungBinh(a);
    cout << "Gia tri trung binh = " << tb << "\n";
    cout << "Cac gia tri >= trung binh: ";
    for (size_t i = 0; i < a.size(); i++)
        if (a[i] >= tb) cout << a[i] << " ";
    cout << "\n";
}

int main() {
    int n;
    cout << "Nhap N: ";
    if (!(cin >> n) || n <= 0) {
        cout << "N phai > 0!\n";
        return 1;
    }
    vector<double> a(n);
    cout << "Nhap " << n << " so thuc: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    inLonHonHoacBangTB(a);
    return 0;
}
