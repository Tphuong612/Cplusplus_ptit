#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int n;
		cin>>n;
		string s=to_string(n);
		size_t a=s.length();
		for(int i=1;i<=a-1;i++)
			if(s[i]<=s[i-1]) return 0;
		cout<<"dung";
	}
