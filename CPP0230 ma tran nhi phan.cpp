#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int n;
		cin>>n;
		int dem=0;
		while(n--)
			{
				int a, dem1=0, dem0=0;
				for(int i=1;i<=3;i++)
					{
						cin>>a;
						if(a==1) dem1++;
						if(a==0) dem0++;
					}
				if (dem1>dem0) ++dem;
			}
		cout<<dem<<endl;
	}
