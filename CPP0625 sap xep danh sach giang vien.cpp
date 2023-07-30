#include <bits/stdc++.h>
using namespace std;
int j=1;
class giangvien{
	private:
		int mgv;
		string hoten, bomon, ten, mon;
	public:
		friend istream &operator >> (istream &is, giangvien &a)
			{
				scanf("\n");
				a.mgv=j++;
				getline(cin, a.hoten);
				getline(cin, a.bomon);
				
				stringstream ss1(a.hoten);
				string h;// dung de lay ten
				while(ss1>>h)
					{
						a.ten=h;
					}
					
				stringstream ss2(a.bomon);
				string res;// dung de lay ki tu dau tien 
				while(ss2>>res)
					{
						a.mon+=toupper(res[0]);
					}
				return is;
			}
		string taomgv()
			{
				string k="GV";
				if(mgv<10) k+='0'+to_string(mgv);
				else k+=to_string(mgv);
				return k;
			}
		int getmgv()
			{
				return this->mgv;
			}
		string getten()
			{
				return this->ten;
			}
		string getmon()
			{
				return this->mon;
			}
		friend ostream &operator << (ostream &os, giangvien a)
			{
				cout<<a.taomgv()<<" "<<a.hoten<<" "<<a.mon<<endl;
				return os;
			}
	
};

bool cmp(giangvien a, giangvien b)
	{
		if(a.getten()==b.getten()) return a.getmgv()<b.getmgv();
		return a.getten()<b.getten();
	}
int main()
{
	int n;
	cin>>n;
	giangvien a[1000];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n, cmp);
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;

}
