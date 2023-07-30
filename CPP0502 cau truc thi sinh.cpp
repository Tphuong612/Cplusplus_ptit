#include <bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string hoten, ngaysinh;
	float mon1, mon2, mon3;	
};
void nhap(ThiSinh &A)
	{
		getline(cin, A.hoten);
		getline(cin, A.ngaysinh);
		cin>>A.mon1>>A.mon2>>A.mon3;
		cin.ignore();
	}
void in(ThiSinh A)
	{
		cout<<A.hoten<<" "<<A.ngaysinh<<" ";
		float dtb=A.mon1+A.mon2+A.mon3;
		cout<<fixed<<setprecision(1)<<dtb<<endl;
	}
int main()
	{
		struct ThiSinh A;
		nhap(A);
		in(A);
		return 0;
	
	}
