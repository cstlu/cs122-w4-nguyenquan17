#pragma once
#include "nhanvien.h"
class NhanVienHD: public NhanVien
{
private:
	double luong_coban;
    double luong_OT;
    int time;
public:
	NhanVienHD();
	NhanVienHD(string, string, string, double , double, int );
	//setters
    void settime(int time);
	void setluong_coban(double luong_cb);
    void setluong_OT(double luong_ot);
	//getters
    int gettime()const;
	double getluong_coban()const;
    double getluong_OT()const;
	double getSalary()const;
	
	
};