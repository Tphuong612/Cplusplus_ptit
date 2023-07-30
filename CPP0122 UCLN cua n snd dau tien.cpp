#include <iostream>
using namespace std;
long long UCLN(long long a, long long b)
	{
		int r = a % b;         // a = b*x + r;
    	while (r!=0) {
        // Gan lai a = b, quay ve bai toan tim ucln(b,r)
        a = b;  
        b = r;
        r = a % b;   // r la phan du cua a chia b
    }
     
    return b;
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
				int n;
				cin>>n;
				long long kq=1, bc=1;
				for(int i=1;i<=n;i++)
					{
						kq=BCNN(bc,i);
						bc=kq;
					}
				cout<<kq<<endl;
			}
	}
