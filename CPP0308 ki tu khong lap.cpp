#include <bits/stdc++.h>
using namespace std;
int check[1005]={0};
int main()
	{
		int t;
		cin>>t;
		cin.ignore();
		while(t--)
			{
				string a;	
				getline(cin,a);
				size_t b=a.size();
				for (int i=0;i<b;i++)
					{
						check[a[i]]++;
					}
				for(int i=0;i<b;i++)
					if(check[a[i]]==1) cout<<a[i];
				cout<<endl;
				for(int i=0;i<=1005;i++)
					check[i]=0;
			}
	}
