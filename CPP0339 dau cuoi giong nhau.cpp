#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			string str;
			cin>>str;
			int x=str.length();
			int dem=0;
			for(int i=0;i<x;i++)
				{
					for(int j=i;j<x;j++) 
						if(str[i]==str[j]) dem++;
				}
			cout<<dem<<endl;
		}
}
