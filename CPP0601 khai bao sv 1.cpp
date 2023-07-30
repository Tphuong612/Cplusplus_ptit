#include <bits/stdc++.h>
using namespace std;
class SinhVien
{
	public:
		string msv, ht, l, ns;
		float gpa;
	public:
		SinhVien()
		{
			this->msv="B20DCCN001";
			this->ht="";
			this->l="";
			this->ns="";
			this->gpa=0;
		}
		void nhap()
		{
			getline(cin,ht);
			getline(cin,l);
			getline(cin,ns);
			if (ns[2]!='/') ns='0'+ns;
			if(ns[5]!='/') ns.insert(3,"0");
			cin>>gpa;
		}
		void xuat()
		{
			cout<<msv<<" "<<ht<<" "<<l<<" "<<ns<<" "<<fixed<<setprecision(2)<<gpa<<endl;
		}
};

int main()
	{
		SinhVien a;
	    a.nhap();
	    a.xuat();
	    return 0;
	}
