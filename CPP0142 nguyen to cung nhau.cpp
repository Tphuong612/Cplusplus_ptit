#include <bits/stdc++.h>
using namespace std;
int checknt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			int x;
			cin>>x;
			int t=0;
			for(int i=1;i<=x;i++)
				{
					if(__gcd(i,x)==1) t++;
				}
			if(checknt(t)==1) cout<<"1\n";
			else cout<<"0\n";
		}
}
