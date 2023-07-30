#include <bits/stdc++.h>
using namespace std;
int dem=0;
string chuanhoa(string &a)
	{
		stringstream ss(a);
		string tmp;
		string kq="";
		while(ss>>tmp)
			{
				tmp[0]=toupper(tmp[0]);
				kq+=tmp[0];
			}
		return kq;
	}
string vietthuong(string &a)
	{
		for(int i=0;i<a.length();i++) a[i]=tolower(a[i]);
		return a;
	}
class giangvien{
	private:
		string ma;
		string ten, hoten, mon, truyvan;
	public:
		
		friend istream &operator >> (istream &is, giangvien &a)
			{
				dem++;
				if(dem<10) a.ma="GV0"+to_string(dem);
				else a.ma="GV"+to_string(dem);
				scanf("\n");
				getline(cin, a.ten);
				getline(cin, a.mon);
				a.hoten=a.ten;
				a.truyvan=vietthuong(a.ten);
				return is;
			}
		
		friend ostream &operator << (ostream &os, giangvien a)
			{
				cout<<a.ma<<" "<<a.hoten<<" "<<chuanhoa(a.mon)<<endl;
				return os;
			}
		string gettruyvan()
			{
				return this->truyvan;
			}
};

int main()
{
	int n;
	cin>>n;
	giangvien a[1000];
	for(int i=0;i<n;i++) cin>>a[i];
//	for(int i=0;i<n;i++) cout<<a[i];
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
		{
			string ct;
			getline (cin, ct);
			
//			cout<<k<<endl;
			cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<ct<<":"<<endl;
			ct=vietthuong(ct);
			for(int i=0;i<n;i++)
				{
//					cout<<a[i].gettruyvan()<<endl;
					string k=a[i].gettruyvan();
					if(k.find(ct)!=string::npos) cout<<a[i];
				}
		}
	
	
		
}
