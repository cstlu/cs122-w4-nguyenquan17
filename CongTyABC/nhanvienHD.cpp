#include "nhanvienHD.h"
NhanVienHD::NhanVienHD()
{}
NhanVienHD::NhanVienHD(string id, string fullname, string taxcode, double luong_cb, double luong_ot, int time)
: NhanVien(id, fullname,taxcode), luong_coban(luong_cb), luong_OT(luong_ot), time(time)
{}
void NhanVienHD::settime(int time)
{
    
        this -> time = time;
}
void NhanVienHD::setluong_coban(double luong_cb)
{
        this -> luong_coban = luong_cb;
}
void NhanVienHD::setluong_OT(double luong_ot)
{
        this -> luong_OT = luong_ot;
}
int NhanVienHD::gettime()const
{
        return this -> time;
}
double NhanVienHD::getluong_coban()const
{
        return this -> luong_coban;
}
double NhanVienHD::getluong_OT()const
{   
        return this -> luong_OT;
}
double NhanVienHD::getSalary()const
{
    if (time>40)
		return this-> luong_coban + this-> luong_OT;
    else
    {
       return this -> luong_coban; 
    }
    
} 
