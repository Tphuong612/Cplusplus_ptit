//Với mỗi số ở chỉ số i đang xét ta chỉ xét các số (x) đằng sau nó. 
//Vì x-a[i]<k => x<=a[i]+k-1 (Do đây là các số nguyên) ==> Tìm vị trí đầu tiên mà phần tử x tại đó > a[i]+k-1--> Upper bound nửa khoảng [i+1;n). 
//Nói cách khác, từ vị trí này trở về i+1 là các số x thỏa mãn yêu cầu. Cộng dồn (Vị trí)-(i+1) là ra số lượng các số x thỏa mãn --> KQ
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			int n,k;
			cin>>n>>k;
			int a[n+5];
			for(int i=0;i<n;i++) cin>>a[i];
			sort(a, a+n);
			long long dem=0;
			for(int i=0;i<n;i++)//x-a[i]<k => x<=a[i]+k-1 => lam theo phan bu: tim vi tri tai x>a[i]+k-1; 
				{
					long long p=upper_bound(a+i+1, a+n, a[i]+k-1)-(a+i+1);
					dem+=p;
				}
			cout<<dem<<endl;
		}
}
