#include<bits/stdc++.h>
using namespace std;
int scp(long long n)
	{
		int k=(int)sqrt(k);
		if(k*k==n) return 1;
		return 0;
	}
void solve(long long n)
	{
		long long sum=1, bandau=n;
		for(int i=2;i<=sqrt(n);i++)
			{
				while(n%i==0)
					{ 
						n=n/i;
					}
				cout<<i<<" ";
				sum=sum+i+bandau/i;
			}
		cout<<n<<" ";
		if(n!=1) sum+=n;
//		cout<<sum<<" ";
		if(scp(bandau)==1) sum-=sqrt(bandau);
//		cout<<sum<<" ";
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