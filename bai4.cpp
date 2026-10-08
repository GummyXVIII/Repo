// Bai 4: Nhap hai so a, b; viet ham void rut gon phan so a/b.
#include <iostream>
using namespace std;

int ucln(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void rutGon(int& a, int& b) {
    if (b == 0) return;                 
    int g = ucln(a, b);
    if (g == 0) return;                 
    a /= g;
    b /= g;
    if (b < 0) {                        
        a = -a;
        b = -b;
    }
}

int main() {
    int a, b;
    cout << "Nhap a, b: ";
    if (!(cin >> a >> b)) {
        cout << "Gia tri khong hop le!\n";
        return 1;
    }
    if (b == 0) {
        cout << "Mau so phai khac 0!\n";
        return 1;
    }
    cout << "Phan so ban dau: " << a << "/" << b << "\n";
    rutGon(a, b);
    if (b == 1) cout << "Phan so rut gon: " << a << "\n";
    else        cout << "Phan so rut gon: " << a << "/" << b << "\n";
    return 0;
}
