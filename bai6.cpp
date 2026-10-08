// Bai 6: Nhap day N phan tu.
//   a) Viet ham xoa phan tu o vi tri thu k
//   b) Viet ham chen phan tu y vao vi tri thu m trong day
#include <iostream>
#include <vector>
using namespace std;

bool xoaPhanTu(vector<int>& a, int k) {
    int n = a.size();
    if (k < 1 || k > n) return false;
    for (int i = k - 1; i < n - 1; i++)    
        a[i] = a[i + 1];
    a.pop_back();                         
    return true;
}

bool chenPhanTu(vector<int>& a, int y, int m) {
    int n = a.size();
    if (m < 1 || m > n + 1) return false;
    a.push_back(0);                          
    for (int i = n; i > m - 1; i--)          
        a[i] = a[i - 1];
    a[m - 1] = y;
    return true;
}

void inDay(const vector<int>& a) {
    for (size_t i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << "\n";
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

    int k;
    cout << "a) Nhap vi tri k can xoa (1.." << n << "): ";
    cin >> k;
    if (xoaPhanTu(a, k)) {
        cout << "Day sau khi xoa: ";
        inDay(a);
    } else {
        cout << "Vi tri k khong hop le!\n";
    }

    int y, m;
    cout << "b) Nhap gia tri y va vi tri m can chen (1.." << a.size() + 1 << "): ";
    cin >> y >> m;
    if (chenPhanTu(a, y, m)) {
        cout << "Day sau khi chen: ";
        inDay(a);
    } else {
        cout << "Vi tri m khong hop le!\n";
    }
    return 0;
}
