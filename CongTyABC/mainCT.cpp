#include "nhanvien.cpp"
#include "nhanvienBC.cpp"
#include "nhanvienHH.cpp"
#include "nhanvienHHDB.cpp"
#include "nhanvienHD.cpp"
#include <iostream>
#include <string>
using namespace std;
int main()
{

    NhanVienHD a("123456","NguyenAnhQuan", "sadsda",100,80,41);
    NhanVienBC b("123456","NguyenAnhQuan","234", 10000);
    NhanVienHH c("123456","NguyenAnhQuan","234", 10000, 200);
    NhanVienHHDB d("123456","NguyenAnhQuan","234", 2000, 300, 1000);
    cout<<"Luong nhan vien a: "<<a.getSalary()<<endl;
    cout<<"Luong nhan vien b: "<<b.getSalary()<<endl;
    cout<<"Luong nhan vien c: "<<c.getSalary()<<endl;
    cout<<"Luong nhan vien d: "<<d.getSalary()<<endl;
    return 0;
}