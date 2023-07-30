#include <bits/stdc++.h>
using namespace std;
long long bcnn(long long a, long long b)
	{
		long long ucln=__gcd(a,b);
		long long k=a*b/ucln;// k la boi chung nho nhat
		return k;
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			long long x,y,z,n;
			cin>>x>>y>>z>>n;
			long long bc1=bcnn(x,y);
			long long solve=bcnn(bc1,z);
			
			long long cantim=pow(10,n-1);
			long long m=ceil((double)cantim/solve);
			long long c=solve*m;
			
			
					if(c>pow(10,n)) cout<<"-1\n";
					else
						{

							cout<<c<<endl;
						}
				
			
		}
}
