#include "nhanvienBC.h"
NhanVienBC::NhanVienBC()
{}
NhanVienBC::NhanVienBC(string id ,string fullname, string taxcode, double salary) : NhanVien(id, fullname, taxcode), fixed_salary(salary)
{}
void NhanVienBC::setFixedsalary(double salary)
{
    this -> fixed_salary = salary; 
}
double NhanVienBC::getFixedsalary()const
{
    return this -> fixed_salary;
}
