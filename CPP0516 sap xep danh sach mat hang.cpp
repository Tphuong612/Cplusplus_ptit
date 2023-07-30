#include <bits/stdc++.h>
using namespace std;
struct mathang{
	int ma;
	string ten, nhom;
	double mua, ban, lai;
};
void nhap(mathang d[], int n)
	{
		for(int i=0;i<n;i++)
			{
				d[i].ma=i+1;
				getline(cin, d[i].ten);
				getline(cin, d[i].nhom);
				cin>>d[i].mua>>d[i].ban;
				cin.ignore();
				d[i].lai=d[i].ban-d[i].mua;	
			}
	}
bool cmp (mathang a, mathang b)
	{
		return a.lai>b.lai;
	}
void in(mathang d[], int n)
	{
		sort(d,d+n,cmp);
		for(int i=0;i<n;i++)
			{
				cout<<d[i].ma<<" "<<d[i].ten<<" "<<d[i].nhom<<" "<<fixed<<setprecision(2)<<d[i].lai<<endl;
			}
	}
int main()
	{
		int n;
		cin>>n;
		cin.ignore();
		mathang d[n+5];
		nhap(d, n);
		in(d,n);
	}
