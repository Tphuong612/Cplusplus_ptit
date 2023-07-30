#include <bits/stdc++.h>
using namespace std;
void solve()
	{
		double xa, xb, ya, yb;
		cin>> xa>>ya>>xb>>yb;
		double kc=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
		cout<<fixed<<setprecision(4)<<kc<<endl;
	}
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				solve();
			}
	}
