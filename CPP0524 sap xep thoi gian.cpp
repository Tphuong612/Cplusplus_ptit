#include <bits/stdc++.h>
using namespace std;
struct thoigian{
	int gio, phut, giay;
};
bool cmp(thoigian a, thoigian b)
	{
		string c1=to_string(a.gio)+to_string(a.phut)+to_string(a.giay);
		string c2=to_string(a.gio)+to_string(a.phut)+to_string(a.giay);
		return c1<c2;
	}
int main()
	{
		int n;
		cin>>n;
		thoigian *ds=new thoigian[n];
		for(int i=0;i<n;i++)
			{
				cin>>ds[i].gio>>ds[i].phut>>ds[i].phut;
			}
		sort(ds, ds+n, cmp);
		for(int i=0;i<n;i++) cout<<ds[i].gio<<" "<<ds[i].thang<<" "<<ds[i].giay<<endl;
	}
