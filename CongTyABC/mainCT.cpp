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
    NhanVienHD a("123456","NguyenAnhQuan", "sadsda",10.000000,8.000000,41);
    a.getSalary();
    cout<<a.getSalary()<<endl;
    return 0;
}