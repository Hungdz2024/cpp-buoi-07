#include <iostream>
using namespace std;
int main(){
    float diem;
    cout << "Nhap diem(thang diem 10): ";
    cin >> diem;
    if(diem < 0 || diem > 10){
        cout << "Diem khong hop le!" << endl;
    } else if(diem >= 8){
        cout << "Xep loai: Gioi" << endl;
    } else if(diem >= 6.5){
        cout << "Xep loai: Kha" << endl;
    } else if(diem >= 5){
        cout << "Xep loai: Trung binh" << endl;
    } else {
        cout << "Xep loai: Yeu" << endl;
    }
    return 0;
}