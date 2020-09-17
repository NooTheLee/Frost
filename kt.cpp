#include <iostream>

using namespace std;

class SinhVien
{
private:
    int ma;
    int tuoi;
    char ten[30];
    char nganhHoc[30];
    float diemTB;
public:
    SinhVien(){}
    void Nhap()
    {
        cout << "Nhap ma SV: ";
        cin >> ma;
        cout << "Nhap ten SV: ";
        fflush(stdin);
        gets(ten);
        cout << "Nhap tuoi SV: ";
        cin >> tuoi;
        cout << "Nhap nganh hoc: ";
        fflush(stdin);
        gets(nganhHoc);
        cout << "Nhap diem tb: ";
        cin >> diemTB;
    }
    void Xuat()
    {
        cout << "Ma sv: " << ma << endl;
        cout << "Ten sv: " << ten << endl;
        cout << "Tuoi: " << tuoi << endl;
        cout << "Nganh hoc: " << nganhHoc << endl;
        cout << "Diem tb: " << diemTB << endl;
    }
    float LayDiemTB()
    {
        return diemTB;
    }
    ~SinhVien(){}
};

void NhapDanhSach(SinhVien dsSv[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << "Sv thu " << i+1 << endl;
        dsSv[i].Nhap();
    }
}
void XuatDanhSach(SinhVien dsSv[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << "Sv thu " << i+1 << endl;
        dsSv[i].Xuat();
    }
}
void SortDanhSach(SinhVien dsSv[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(dsSv[i].LayDiemTB() > dsSv[j].LayDiemTB())
            {
                SinhVien temp = dsSv[i];
                dsSv[i] = dsSv[j];
                dsSv[j] = temp;
            }
        }
    }
}
void SeachDiem(SinhVien dsSv[],int n,float m)
{
    for(int i=0;i<n;i++)
    {
        if(dsSv[i].LayDiemTB() == m)
        {
            dsSv[i].Xuat();
        }
    }
}
int main()
{
    int n;
    cout << "Nhap so SV: " ;
    cin >> n;
    SinhVien dsSV[n];
    NhapDanhSach(dsSV,n);
    XuatDanhSach(dsSV,n);
    SortDanhSach(dsSV,n);
    float m;
    cout << "Nhap diem can tim: ";
    cin >> m;
    SeachDiem(dsSV,n,m);
}