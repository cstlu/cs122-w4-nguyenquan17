#include "nhanvienHH.h"

NhanVienHH::NhanVienHH()
{}
NhanVienHH::NhanVienHH(string id, string fullname, string taxcode , double tdt, double thuong):NhanVien(id, fullname, taxcode),
tongdoanhthu(tdt), mucthuong(thuong)
{}
void NhanVienHH::settongdoanhthu(double tdt)
{
    this -> tongdoanhthu=tdt;
}
void NhanVienHH::setmucthuong(double thuong)
{
    this -> mucthuong=thuong;
}
double NhanVienHH::getTongdoanhthu()const
{
    return this -> tongdoanhthu;
}
double NhanVienHH::getmucthuong()const
{
    return this -> mucthuong;
}
double NhanVienHH::getSalary()const
{	
	return this->tongdoanhthu * this->mucthuong / 100;
}


