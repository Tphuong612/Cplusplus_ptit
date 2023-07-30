#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ma,hoten, lop;
	string ngaysinh;
	float gpa;
};
void nhap(SinhVien &a)
	{
		a.ma="B20DCCN001";
		getline(cin, a.hoten);
		getline(cin, a.lop);
		getline(cin,a.ngaysinh);
		cin>>a.gpa;
		cin.ignore();
	}
void in(SinhVien a)
	{
		cout<<a.ma<<" "<<a.hoten<<" "<<a.lop<<" ";
		if(a.ngaysinh[2]!='/') a.ngaysinh='0'+a.ngaysinh;
		if(a.ngaysinh[5]!='/') a.ngaysinh.insert(3,"0");
		cout<<a.ngaysinh<<" ";
		cout<<fixed<<setprecision(2)<<a.gpa<<" ";
		
	}
int main()
	{
		struct SinhVien a;
		nhap(a);
		in(a);
		return 0;
	}
