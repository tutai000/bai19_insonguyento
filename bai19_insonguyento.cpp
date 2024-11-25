// bai19_insonguyento.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "KIEM TRA SO CO PHAI SO NGUYEN TO KHONG\n";
    int so;
    cout << "Nhap so:"; cin >> so;
    int dem = 0;
    for (int i = 1; i <= so; i++)
    {
        // neu chia het thi trong dem len 1:so%i==0
        if (so % i == 0)
        {
            dem++;
        }
    }
    cout << " so dem=" << dem << endl;
    if (dem == 2) {
        cout << "so" << so << "la so nguyen to\n";
    }
    else {
        cout << "so" << so << "khong phai so nguyen to\n";
    }
    return 0;
}
