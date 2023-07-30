#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int n;
		cin>>n;
		cin.ignore();
		set <string> tach;
		for(int i=0;i<n;i++)
			{
				string a;
				getline(cin, a);
				tach.insert(a);
			}
		cout<<tach.size();
	}
