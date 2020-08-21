#include <iostream>
#include <string.h>
using namespace std;

struct hoahoc
{
    char kyhieu[5];
    int hoatri;
};
int BCNN(int a,int b)
{
    for(int i=1;i<=a*b;i++)
    {
        if(i%a == 0 && i%b == 0)
        {
            return i;
        }
    }
}
void Nhap(hoahoc &ct1, hoahoc &ct2)
{
    cout << "Nguyen to 1:" << endl;
    cout << "Nhap ki hieu: ";
    fflush(stdin);
    gets(ct1.kyhieu);
    cout << "Nhap hoa tri: ";
    cin >> ct1.hoatri;

    cout << "Nguyen to 2:" << endl;
    cout << "Nhap ki hieu: ";
    fflush(stdin);
    gets(ct2.kyhieu);
    cout << "Nhap hoa tri: ";
    cin >> ct2.hoatri;
}
void Xuat(hoahoc ct1, hoahoc ct2)
{
    int bc = BCNN(ct1.hoatri,ct2.hoatri);
    cout << ct1.kyhieu << bc/ct1.hoatri << ct2.kyhieu << bc/ct2.hoatri << endl;
}
int main()
{
    hoahoc ct1,ct2;
    Nhap(ct1,ct2);
    Xuat(ct1,ct2);
}
