#include <iostream>
using namespace std;
long long UCLN(long long a, long long b)
	{
		if(a*b==0) return a+b;
		while(a!=b)
			{
				if (a>b) a=a-b;
				else b=b-a;
			}
		return a;
	}
long long BCNN(long long a, long long b)
	{
		return (a*b)/UCLN(a,b);
	}
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				long long a,b;
				cin>>a>>b;
				cout<<BCNN(a,b)<<" "<<UCLN(a,b)<<endl;
			}
	}
