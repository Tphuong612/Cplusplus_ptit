#include <bits/stdc++.h>
using namespace std;
class doanhnghiep{
	private:
		string ma, ten;
		int sl;
	public:
		friend istream &operator >>(istream &is, doanhnghiep &a)
			{
				scanf("\n");
				getline(cin, a.ma);
				getline(cin, a.ten);
				cin>>a.sl;
				return is;
			}
		friend ostream &operator<< (ostream &os, doanhnghiep a)
			{
				cout<<a.ma<<" "<<a.ten<<" "<<a.sl<<endl;
				return os;
			}
		int getsl()
			{
				return sl;
			}
		string getma()
			{
				return ma;
			}
};
bool cmp(doanhnghiep a, doanhnghiep b)
	{
		if(a.getsl()==b.getsl()) return a.getma()<b.getma();
		return a.getsl()>b.getsl();
	}
int main()
{
	int n;
	cin>>n;
	doanhnghiep a[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	int t;
	cin>>t;
	while(t--)
		{
				int x,y;
				cin>>x>>y;
				cout << "DANH SACH DOANH NGHIEP NHAN TU " << x << " DEN " << y << " SINH VIEN:\n";
//				vector <doanhnghiep> v;
				sort(a, a+n, cmp);
				for(int i=0;i<n;i++) 
					{
//						cout<<a[i].getsl()<<endl;
						if(a[i].getsl()>=x&&a[i].getsl()<=y) 
							cout<<a[i];
//							v.push_back(a[i]);
					}
//				
//				for(int i=0;i<v.size();i++) cout<<a[i];
		}

}
