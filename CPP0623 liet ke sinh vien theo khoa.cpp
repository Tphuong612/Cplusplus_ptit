#include <bits/stdc++.h>
using namespace std;
class sinhvien{
	private:
		string msv, ten, lop, email;
	public:
		friend istream &operator >>(istream &is, sinhvien &a)
			{
				scanf("\n");
				getline(cin, a.msv);
				getline(cin, a.ten);
				getline(cin, a.lop);
				getline(cin, a.email);
				return is;
			}
		friend ostream &operator << (ostream &os, sinhvien a)
			{
				cout<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
				return os;
			}
		string getlop()
			{
				return this->lop;
			}
};
bool compare(sinhvien a, int n)
	{
		int nam=n%100;
		string s=a.getlop();
		int year=(s[1]-'0')*10+s[2]-'0';
		if(year==nam) return true;
		else return false;
	}
int main()
{
	int n;
	cin>>n;
	sinhvien a[1000];
	for(int i=0;i<n;i++) cin>>a[i];
	int q;
	cin>>q;
	while(q--)
		{
			int s;
			cin>>s;
			cout<<"DANH SACH SINH VIEN KHOA "<<s<<":"<<endl;
			for(int i=0;i<n;i++)
				{
					if(compare(a[i],s)) cout<<a[i]<<endl;
				}
		}
	return 0;
}
