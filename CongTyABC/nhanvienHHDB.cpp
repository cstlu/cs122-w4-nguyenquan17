#include "nhanvienHHDB.h"
NhanVienHHDB::NhanVienHHDB()
{}
NhanVienHHDB::NhanVienHHDB(string id, string fullname, string taxcode, double tongdoanhthu, double mucthuong, double base_salary):
NhanVienHH(id, fullname, taxcode, tongdoanhthu, mucthuong ), base_salary(base_salary)
{}
void NhanVienHHDB::setbase_salary(double baseSalary)
{
    this -> base_salary=baseSalary;
}
double NhanVienHHDB::getbase_salary()const
{
    return this -> base_salary;
}
