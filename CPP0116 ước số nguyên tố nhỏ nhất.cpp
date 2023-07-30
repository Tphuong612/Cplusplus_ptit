#include <bits/stdc++.h>
using namespace std;
int checknt(int n)
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			if(n%i==0) return 0;
		return 1;
	}
int main()
{
	int t;
	cin>>t;
	while (t--)
		{
			int n;
			for(int i=1;i<=n;i++)
				{
					if(i==1) cout<<"1 ";
					if(checknt(i)==1) cout<<i<<" ";
					else 
						{
							if(n%2==0) cout<<"2 ";
							else 
								{
									for(int j=3;i<=10;i++){
										if(i%j==0) cout<<"j ";
										break;
									}
											
								}
						}
				}
		}
}
