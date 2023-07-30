#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			string s;
			cin>>s;
			int a[1005]={0};// mang tan suat
			
			for(int i=0;i<s.length();i++)
	    		a[s[i]]++;
	    	int max=0;
	    	for(int i='a';i<='z';i++)
	    		if (a[i]>max) max=a[i];
	    	
	    	if(max<=s.length()-max+1) cout<<"1\n";
	    	else cout<<"0\n";
		}
}
