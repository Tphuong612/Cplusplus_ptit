#include <bits/stdc++.h>
using namespace std;
long long binpow(int a, int b)
{
	if(b==0) return 1;
	long long x=binpow(a,b/2)%10;
	if(b%2==0) return (x%10)*(x%10)%10;
	else return a*(x%10)*(x%10)%10;
}
int main()
{
//	int t;
//	cin>>t;
//	while(t--){
		string s;
		cin>>s;
		long long du=0;
		for(int i=s.length()-1;i>=0;i--)
			if(s[i]=='1') du+=binpow(2,s.length()-1-i)%5;
		if(du%5==0) cout<<"YES";
		else cout<<"NO";
//	}
}
