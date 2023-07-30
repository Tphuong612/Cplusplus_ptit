#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int t;
		cin>>t;
		cin.ignore();
		while(t--)
			{
				string a;
				getline (cin, a);
				size_t b=a.size();
				map <char, int> m;
				char c[305];
				for(int i=0;i<b;i++)
					{ 
						c[i]=a[i];
						m[c[i]]++;	
					}
				for (int i=0;i<b;i++)
					{
						if(m[a[i]]!=0) {
								cout<<a[i]<<m[a[i]];
								m[a[i]]=0;
						}
					}
				cout<<endl;
			}
	}
