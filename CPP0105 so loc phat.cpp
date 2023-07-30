#include <iostream>
using namespace std;
#include <cstring>
int check(char a[])
	{
		int len = strlen(a);
		for(int i=0;i<len-1;i++)
			if(a[i]!='6'&&a[i]!='0'&&a[i]!='8') return 0;
		return 1;
	}
int main()
	{
		int t;
		cin>>t;
		getchar();
		while(t--)
			{
				char a[20];
				cin>>a;
				if(check(a)==1) cout<< "YES\n";
				else cout<<"NO\n";
			}
	}
