#include <iostream>

using namespace std;

class Mang
{
private:
    int n;
    int *arr = new int[n];
public:
    Mang(){};
    void NhapMang()
    {
        cout << "Nhap so phan tu cua mang: ";
        cin >> n;
        for(int i=0;i<n;i++)
        {
            cout << "Nhap phan tu thu "<< i+1 << ":";
            cin >> *(arr+i);
        }
    }
    void XuatMang()
    {
        for(int i=0;i<n;i++)
        {
            cout << *(arr+i) << " ";
        }
    }
    void TimMax()
    {
        int temp = *(arr+0);
        for(int i=0;i<n;i++)
        {
            if(temp < *(arr+i))
            {
                temp = *(arr+i);
            }
        }
        cout << "Vi tri cua phan tu max trong mang: " << endl;
        for(int i=0;i<n;i++)
        {
            if(*(arr+i) == temp )
            {
                cout << i << " ";
            }
        }
    }
    void TimSoLanXuatHien(int n)
    {
        int dem=0;
        for(int i=0;i<n;i++)
        {
            if(*(arr+i) == n)
            {
                dem++;
            }
        }
        cout << "So lan xuat hien: " << dem;
    }
};

int main()
{
    int n;
    cout << "Nhap so pha tu: ";
    cin >> n;
}