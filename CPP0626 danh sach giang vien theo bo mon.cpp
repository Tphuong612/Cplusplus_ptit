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
class giangvien{
	private:
		string ma;
		string ten, mon, truyvan;
	public:
		
		friend istream &operator >> (istream &is, giangvien &a)
			{
				dem++;
				if(dem<10) a.ma="GV0"+to_string(dem);
				else a.ma="GV"+to_string(dem);
				scanf("\n");
				getline(cin, a.ten);
				getline(cin, a.mon);
				a.truyvan=chuanhoa(a.mon);
				return is;
			}
		
		friend ostream &operator << (ostream &os, giangvien a)
			{
				cout<<a.ma<<" "<<a.ten<<" "<<chuanhoa(a.mon)<<endl;
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
			string k=chuanhoa(ct);
//			cout<<k<<endl;
			cout<<"DANH SACH GIANG VIEN BO MON "<<k<<":"<<endl;
			for(int i=0;i<n;i++)
				{
//					cout<<a[i].gettruyvan()<<endl;
					if(k==a[i].gettruyvan()) cout<<a[i];
				}
		}
	
	
		
}
