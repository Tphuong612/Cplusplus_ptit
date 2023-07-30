#include<bits/stdc++.h>
using namespace std;
int tongcs(int n)
	{
		int s=0;
		while(n)
			{
				s+=n%10;
				n/=10;
			}
		return s;	
	}
int checknt(int n)
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			if(n%i==0) return 0;
		return 1;
	}
void solve(int n)
	{
		int sum=0;
		int bandau=n;
		for(int i=2;i<=n;i++)
			{
				if(checknt(i)==1)
					{
						while (n%i==0) 
						{
							sum+=tongcs(i);
							n=n/i;
						}
					}
			}
//		cout<<bandau<<" ";
//		cout<<tongcs(bandau)<<" ";
//		cout<<sum<<" ";
		if(checknt(bandau)==0&&tongcs(bandau)==sum) cout<<"YES\n";
		else cout<<"NO\n";
	}
int main(){
	int t;
	cin>>t;
	while(t--)
		{
			int n;
			cin>>n;
			solve(n);
		}
}