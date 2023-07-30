#include <bits/stdc++.h>
using namespace std;
struct people{
	string ten, ns;
};
bool cmp(people &a, people &b )
	{
		string c1=a.ns.substr(6,4)+a.ns.substr(3,2)+a.ns.substr(0,2);
		string c2=b.ns.substr(6,4)+b.ns.substr(3,2)+b.ns.substr(0,2);
		return c1<c2;
//		int p1=stoi(c1), p2=stoi(c2);
//		return p1<p2;	
	}
int main()
	{
		int n;
		cin>>n;
		cin.ignore();
		people a[n+5];
		for(int i=0;i<n;i++)
			{
				cin>>a[i].ten>>a[i].ns;
			}
		sort(a, a+n, cmp);
		cout<<a[n-1].ten<<endl<<a[0].ten<<endl;
	}
