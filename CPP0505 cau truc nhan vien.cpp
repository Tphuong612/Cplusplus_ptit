#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string hoten, gioitinh, ngaysinh, diachi, thue, ngayki;
};
void nhap(NhanVien &a)
	{
		getline(cin, a.hoten);
		getline(cin, a.gioitinh);
		getline(cin, a.ngaysinh);
		getline(cin, a.diachi);
		getline(cin, a.thue);
		getline(cin, a.ngayki);
	}
void ChuanHoa(string a)
	{
		if(a[2]!='/') a='0'+a;
		if(a[5]!='/') a.insert(3,"0");
	}
void in(NhanVien a)
	{
		ChuanHoa(a.ngaysinh);
		ChuanHoa(a.ngayki);
		cout<<"00001 "<<a.hoten<<" "<<a.gioitinh<<" "<<a.ngaysinh<<" "<<a.diachi<<" "<<a.thue<<" "<<a.ngayki<<" ";
	}
int main()
	{
		struct NhanVien a;
		nhap(a);
		in(a);
		return 0;
	}
