// Bai 2: Nhap day N phan tu, viet ham void sap xep tang dan.
// Thuat toan: Insertion Sort (sap xep chen).
#include <iostream>
#include <vector>
using namespace std;

void sapXepTang(vector<int>& a) {
    int n = a.size();
    for (int i = 1; i < n; i++) {
        int key = a[i];                 
        int j = i - 1;
        while (j >= 0 && a[j] > key) {  
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;                 
    }
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

    sapXepTang(a);

    cout << "Day sau khi sap xep tang dan: ";
    for (int x : a) cout << x << " ";
    cout << "\n";
    return 0;
}
