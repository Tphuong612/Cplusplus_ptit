#include <bits/stdc++.h>
using namespace std;
int checkscp(long long a, long long b)
	{
		long long x = (long long)a * a + (long long)b * b;
	    int c = sqrt(x);
	    if ((long long)c * c == x) return c;
	    return 0;
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			int n;
			cin>>n;
			long long a[n+5];
			for(int i=0;i<n;i++) cin>>a[i];
			sort(a, a+n);
			int k=0;
			for(int i=0;i<n;i++)
				{
					for(int j=i+1;j<n;j++)
						{
							if(checkscp(a[i],a[j]))	
								{
									if(binary_search(a, a+n, sqrt(a[i]*a[i]+a[j]*a[j])))
										{
											k=1;
											cout<<"YES\n";
											break;
										}
								}
						}
				}
			if(k==0) cout<<"NO\n";
			
		}
}
