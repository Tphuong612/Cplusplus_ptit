#include <bits/stdc++.h>
using namespace std;
//void hv(string &a, string &b)
//	{
//		if(a<b)	
//			{
//				string t=a;
//				a=b;
//				b=t;
//			}
//	}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			string a, b;
		    cin >> a >> b;
		    int len = max(a.length(), b.length());
		    while(a.length() < len) a = "0" + a;
		    while(b.length() < len) b = "0" + b;
		    if(a < b) swap(a, b);// a la so lon hon
//			hv(a,b);
//		    cout<<a<<" "<<b<<" ";
		    string kq="";
		    int nho=0;
		    for(int i=a.length()-1;i>=0;i--)
		    	{
		    		int digit=a[i]-b[i]-nho;
		    		if(digit<0)
		    			{
		    				digit+=10;
		    				nho=1;
						}
					else nho=0;
					kq+=digit+'0';
				}
			for(int i=kq.length()-1;i>=0;i--) cout<<kq[i];// dao nguoc
			cout<<endl;
			
			int dau=kq.length()-1;
			int i=kq.length()-1;
			while(kq[i]!='0') dau--;	
			for(int i=dau-1;i>=0;i--) cout<<kq[i];// dao nguoc
			cout<<endl;
		    
		}
}
