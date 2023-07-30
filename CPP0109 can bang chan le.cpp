#include <iostream>
using namespace std;
#include <math.h>
int solve(long long n)
	{
		int chan=0, le=0;
		while(n)
			{
				int chuso=n%10;
				if(chuso%2==0) ++chan;
				else ++le;
				n=n/10;	
			}
		if (chan==le) return 1;
		return 0;		
	}
int main()
	{
		int n;
		cin>>n;
		int j=0;
		for(int i=pow(10,n-1);i<pow(10,n);i++)
			{
				if (solve(i)==1) 
					{
						cout<<i<<" ";
						j++;
					}
				if(j%10==0) cout<<endl;		
			}
	}
