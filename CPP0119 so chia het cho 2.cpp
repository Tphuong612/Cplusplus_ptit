#include <bits/stdc++.h>
using namespace std;
int scp(long long n)
	{
		long long k=(int) sqrt(n);
		if(k*k==n) return 1;
		else return 0;
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			long long n;
			cin>>n;
			int dem=0;
			if(n%2==0)
				{
					for(int i=1;i<=sqrt(n);i++)
						{
							if(n%i==0)
								{
									if(i%2==0) dem++;
									if((n/i)%2==0) dem++;
								}
						}
					if(scp(n)==1&&(int)sqrt(n)%2==0) dem=dem-1;
					cout<<dem<<endl;
				}
			else cout<<"0\n";
		}
}
