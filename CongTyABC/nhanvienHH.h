#pragma once
#include "nhanvien.h"
class NhanVienHH:public NhanVien
{
protected:
	double tongdoanhthu;
	double mucthuong;//10%
public:
	NhanVienHH();
	NhanVienHH(string, string, string, double,double);
	//setters
    void settongdoanhthu(double);
    void setmucthuong(double);
	//getters
    double getTongdoanhthu()const;
    double getmucthuong()const; 

	//method
	double getSalary()const;
};