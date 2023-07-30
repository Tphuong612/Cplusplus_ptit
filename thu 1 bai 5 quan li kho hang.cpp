#include <bits/stdc++.h>
using namespace std;

string chuanhoa(string a)
	{
		stringstream ss(a);
		string kq="";
		string tmp;
		while(ss>>tmp)
			{
				kq+=toupper(tmp[0]);
			}
		return kq;
	}
class mathang{
	public: 
		string ma, ten, hang, donvi;
		string sosanh;
		long long ban, mua, loi;
	public:
		friend istream &operator >>(istream &is, mathang &a)
			{
				
				scanf("\n");
				getline(cin, a.ten);
				map <string, int> m;
				a.ma=chuanhoa(a.ten);
				m[a.ma]++;
				int n = m[a.ma];
				if(n<10) a.ma+="000"+to_string(n);
				else if(10<=n&&n<=99) a.ma+="00"+to_string(n);
				else if(100<=n&&n<=999) a.ma+="0"+to_string(n);
				else a.ma+=to_string(n);
				getline(cin, a.hang);
				getline(cin, a.donvi);
				cin>>a.mua;
				cin>>a.ban;
				a.loi=a.ban-a.mua;
				return is;
			}
		friend ostream &operator<< (ostream &os, mathang a)
			{
				cout<<a.ma<<" "<<a.ten<<" "<<a.hang<<" "<<a.donvi<<" "<<a.mua<<" "<<a.ban<<endl;
				return os;
			}
		
};
bool cmp(mathang a, mathang b)
	{
		if(a.loi==b.loi) return a.ten<b.ten;
		return a.loi>b.loi;
	}
int main()
{
	int n;
	cin>>n;
	mathang a[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n, cmp);
	for(int i=0;i<n;i++) cout<<a[i];
}
