#include <bits/stdc++.h>
using namespace std;
void cong(string a, string b)
	{
		
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
				kq=to_string(digit)+kq;
			}
		if(nho==1) kq='1'+kq;
//		cout<<kq<<endl;
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			string a, b;
			cin>>a>>b;
//			cong(a,b);
			string kq="";
			for(int i=a.length()-1;i>=0;i--)
				{
					int nho=0;
					string res="";
					for(int j=b.length()-1;j>=0;j--)
						{
							int digit=(a[i]-'0')*(b[j]-'0')+nho;
							if(digit>=10)
								{
									digit%=10;
									nho=digit/10;
								}
							else nho=0;
							res=to_string(digit)+res;
						}
					for(int k=0;k<a.length()-i-1;k++) res+='0';
					cong(kq,res);
				}
			cout<<kq;
		}
}

