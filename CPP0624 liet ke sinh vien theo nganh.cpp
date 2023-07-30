#include <bits/stdc++.h>
using namespace std;
class sinhvien{
	private:
		string msv, ten, lop, email;
	public:
		friend istream &operator >> (istream &is, sinhvien &a)
			{
				scanf("\n");
				getline(cin, a.msv);
				getline(cin, a.ten);
				getline(cin, a.lop);
				getline(cin, a.email);
				return is;
			}
		friend ostream &operator <<( ostream &os, sinhvien a) 
			{
				cout<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
				return os;
			}
		string getmsv()
			{
				return this->msv;
			}
		string getlop()
			{
				return this->lop;
			}
};
string solve(string s)
	{
		for(int i=0;i<s.length();i++)
			s[i]=tolower(s[i]);
		if(s=="ke toan") return "DCKT";
		if(s=="cong nghe thong tin") return "DCCN";
		if(s=="an toan thong tin") return "DCAT";
		if(s=="vien thong") return "DCVT";
		if(s=="dien tu") return "DCDT";
		return 0;	
	}
int main()
{
	int n;
	cin>>n;
	sinhvien a[1000];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int q;
	cin>>q;
	cin.ignore();
	while (q--)
		{
			string s;
			getline(cin, s);
			for(int i=0;i<s.length();i++)
				s[i]=toupper(s[i]);
			cout<<"DANH SACH SINH VIEN NGANH "<<s<<":"<<endl;
			for(int i=0;i<n;i++) 
				{
					string x=a[i].getmsv();
					string p=a[i].getlop();// dung de kiem tra xem lop co bat dau bang E khong
					string tmp=x.substr(3,4);// copy tu msv
					if(tmp=="DCCN"||tmp=="DCAT")
						{
							if(tmp==solve(s)&&p[0]!='E') cout<<a[i]<<endl;
						}
					else 
						{
							if(tmp==solve(s)) cout<<a[i]<<endl;
						}
				}
		}
}
