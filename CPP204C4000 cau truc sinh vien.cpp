#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ht, lop, ns;
	float gpa;
};
void nhapThongTinSV(SinhVien &a)
	{
		getline(cin,a.ht);
		cin>>a.lop>>a.ns>>a.gpa;
		cin.ignore();
	}
void chuanhoa(string &a)
	{
		if(a[2]!='/') a='0'+a;
		if(a[5]!='/') a.insert(3,"0");
	}
void inThongTinSV(SinhVien a)
	{
		chuanhoa(a.ns);
		cout<<"N20DCCN001\t"<<a.ht<<"\t"<<a.lop<<"\t"<<a.ns<<"\t"<<fixed<<setprecision(2)<<a.gpa;
	}
int main()
	{
	    struct SinhVien a;
	    nhapThongTinSV(a);
	    inThongTinSV(a);
	    return 0;
	}
