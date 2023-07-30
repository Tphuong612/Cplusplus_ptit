#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
		{
			string a, b;
			cin>>a>>b;
				int len=max(a.length(), b.length());
			while(a.length()<len) a='0'+a;
			while(b.length()<len) b='0'+b;
			string kq="";
			int nho=0;
			for(int i=len-1;i>=0;i--)
				{
					int digit=(a[i]-'0')+(b[i]-'0')+nho;
					if(digit>=10)
						{
							digit%=10;
							nho=1;
						}
					else nho=0;
					kq+=digit+'0';
				}
			if(nho==1) kq+='1';
			for(int i=kq.length()-1; i>=0; i--)
				cout<<kq[i];
			cout<<endl;
		}
}

