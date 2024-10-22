#pragma once

using namespace std;
ref class ZavdClass
{
	double a, b;
public:
	ZavdClass() { a = 1; b = 1;}
	void Fn_b(double x, double y, double z);//Обчислення функції b[x,y,z]
	void Fn_a(double x, double y, double z);// Обчислення функції a[x, y, z,b]
	
	double geta() { return a; }
	double getb() { return b; }
	double Fn_aver(double a, double b);



};
