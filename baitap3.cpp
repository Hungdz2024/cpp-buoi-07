#include <iostream>
using namespace std;
int main(){
    char diem_chu;
    cout << "Nhap diem chu (A, B, C, D, F): ";
    cin >> diem_chu;
    switch (diem_chu) {
        case 'A':
            cout << "4.0" << endl;
            break;
        case 'B':
            cout << "3.0" << endl;
            break;
        case 'C':
            cout << "2.0" << endl;
            break;
        case 'D':
            cout << "1.0" << endl;
            break;
        case 'F':
            cout << "0.0" << endl;
            break;
        default:
            cout << "Diem chu khong hop le" << endl;
    }
    return 0;
}