// Bai 7: Nhap mang 2 chieu kich thuoc N x M.
//   a) Viet ham tinh tong cac phan tu trong mang
//   b) Viet ham xoa dong thu i trong mang 2 chieu
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

long long tongMang2D(const vector<vector<int>>& a) {
    long long tong = 0;
    for (size_t i = 0; i < a.size(); i++)
        for (size_t j = 0; j < a[i].size(); j++)
            tong += a[i][j];
    return tong;
}

bool xoaDong(vector<vector<int>>& a, int i) {
    int n = a.size();
    if (i < 1 || i > n) return false;
    for (int r = i - 1; r < n - 1; r++)
        for (size_t c = 0; c < a[r].size(); c++)
            a[r][c] = a[r + 1][c];
    a.pop_back();                            
    return true;
}

void inMaTran(const vector<vector<int>>& a) {
    for (size_t i = 0; i < a.size(); i++) {
        for (size_t j = 0; j < a[i].size(); j++)
            cout << setw(5) << a[i][j];
        cout << "\n";
    }
}

int main() {
    int n, m;
    cout << "Nhap so dong N va so cot M: ";
    if (!(cin >> n >> m) || n < 0 || m < 0) {
        cout << "N, M khong hop le!\n";
        return 1;
    }
    vector<vector<int>> a(n, vector<int>(m));
    cout << "Nhap ma tran " << n << "x" << m << ":\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) cin >> a[i][j];

    cout << "a) Tong cac phan tu = " << tongMang2D(a) << "\n";

    int d;
    cout << "b) Nhap dong i can xoa (1.." << n << "): ";
    cin >> d;
    if (xoaDong(a, d)) {
        cout << "Mang sau khi xoa dong " << d << ":\n";
        inMaTran(a);
    } else {
        cout << "Dong i khong hop le!\n";
    }
    return 0;
}
