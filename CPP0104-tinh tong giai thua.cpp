#include <iostream>
using namespace std;
int main()
	{
		long long n;
		cin>>n;
		long long s=0;
		long long a=1;
		for(int i=1;i<=n;i++)
			{
				a=a*i;
				s=s+a;
			}
		cout<<s;
	}
