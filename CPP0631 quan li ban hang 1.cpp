#include <bits/stdc++.h>
using namespace std;
int dem1=0;
class KhachHang{
	private:
		string makh, tenkh, gt, ns, dc;
	public:
		friend class HoaDon;
		friend istream &operator >> (istream &is, KhachHang &a)
			{
				dem1++;
				if(dem1<10) a.makh="KH00"+to_string(dem1);
				else a.makh="KH0"+to_string(dem1);
				getline(cin, a.tenkh);
				cin>>a.gt;
				cin>>a.ns;
				scanf("\n");
				getline(cin, a.dc);
				return is;
			}
};
int dem2=0;
class MatHang{
	private:
		string mamh, tenmh, dv;
		long long mua, ban;
	public:
		friend class HoaDon;
		friend istream &operator >>(istream &is, MatHang &a)
			{
				dem2++;
				if(dem2<10) a.mamh="KH00"+to_string(dem2);
				else a.mamh="KH0"+to_string(dem2);
				getline(cin, a.tenmh);
				getline(cin, a.dv);
				cin>>a.mua>>a.ban;
				return is;
			}
};
int dem3=0;
class HoaDon{
	private:
		string mahd;
		int sl;
		
	public:
		friend istream &operator >> (istream &is, HoaDon &a)
			{
				cin>>a.sl;
				return is;
			}
		friend ostream &operator << (ostream &os, HoaDon a)
			{
				long long a.tien=(a.ban-a.mua)*a.sl;
				cout<<a.mahd<<" "<<a.tenkh<<" "<<a.dc<<" "<<a.tenmh<<" "<<a.dv<<" "<<a.mua<<" "<<a.ban<<" "<<a.sl<<" "<<a.tien<<endl;
				return os;
			}
		
		
		
};
int main()
{
	KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
