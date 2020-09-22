#include <iostream>

using namespace std;


class GiaoDichNha
{
private:
    char ma[255];
    int thang;
    float dongia;
    bool loainha;
    char diachi[255];
    float dientich;
public:
    GiaoDichNha(){}
    void Nhap()
    {
        cout << "Nhap ma giao dich:";
        fflush(stdin);
        gets(ma);
        cout << "Nhap thang : ";
        cin >> thang;
        while(thang<1 || thang>12)
        {
            cout << "Thang khong hop le, hay nhap lai thang: ";
            cin >> thang;
        }
        cout << "Nhap don gia: ";
        cin >> dongia;
        cout << "Chon loai nha: \n1.Loai thuong\n2.Loai cao cap" << endl;
        int check;
        cin >> check;
        if(check == 1)
        {
            loainha = false;
        }
        else
        {
            loainha = true;
        }
        cout << "Nhap dia chi: ";
        fflush(stdin);
        gets(diachi);
        cout << "Nhap dien tich: ";
        cin >> dientich;
        cout << "-----------------------------" << endl;
    }
    void Xuat()
    {
        cout << "-----------------------------" << endl;
        cout << "Ma giao dich: " << ma << endl;
        cout << "Thang giao dich: " << thang << endl;
        cout << "Loai nha: ";
        if(loainha)
        {
            cout << "cao cap" << endl;
        }
        else
        {
            cout << "binh thuong" << endl;  
        }
        cout << "Dia chi: " << diachi << endl;
        cout << "Dien tich: " << dientich << endl;
        cout << "-----------------------------" << endl;
    }
    float TinhTien()
    {
        if(loainha)
        {
            return dientich*dongia;
        }
        return dientich*dongia*0.9;
    }
    bool LoaiNha()
    {
        return loainha;
    }
    int ThangGiaoDich()
    {
        return thang;
    }
    ~GiaoDichNha(){}
};

void GiaoDichMax(GiaoDichNha dsdd[],int n)
{
    int temp = dsdd[0].TinhTien();
    for(int i=1;i<n;i++)
    {
        if(temp < dsdd[i].TinhTien())
        {
            temp = dsdd[i].TinhTien();
        }
    }
    cout << "Giao dich co thanh tien lon nhat: " << endl;
    for(int i=0;i<n;i++)
    {
        if(temp == dsdd[i].TinhTien())
        {
            dsdd[i].Xuat();
        }
    }
}
void DemLoaiNha(GiaoDichNha dsdd[],int n)
{
    int thuong = 0, caocap = 0;
    for(int i=0;i<n;i++)
    {
        if(dsdd[i].LoaiNha())
        {
            caocap++;
        }
        else
        {
            thuong++;
        }
    }
    cout << "So luong loai nha thuong: " << thuong << endl;
    cout << "So luong nha cao cap: " << caocap << endl;
}
void GiaoDichThang9(GiaoDichNha dsdd[],int n)
{
    cout << "Danh sach giao dich thang 9: "  << endl;
    int dem = 0;
    for(int i=0;i<n;i++)
    {
        if(dsdd[i].ThangGiaoDich() == 9)
        {
            dem++;
            dsdd[i].Xuat();
        }
    }
    if(dem == 0)
    {
        cout << "Danh sach rong,khong co giao dich nao vao thang 9" << endl;
    }
}
int main()
{
    int n;
    cout << "Nhap so giao dich: ";
    cin >> n;
    GiaoDichNha dsdd[n];
    for(int i=0;i<n;i++)
    {
        cout << "Giao dich thu " << i+1 << ": " << endl;
        dsdd[i].Nhap();
    }
    for(int i=0;i<n;i++)
    {
        cout << "Giao dich thu " << i+1 << ": " << endl;
        dsdd[i].Xuat();
    }
    GiaoDichMax(dsdd,n);
    //DemLoaiNha(dsdd,n);
    //GiaoDichThang9(dsdd,n);
}