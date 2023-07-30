#include <bits/stdc++.h>
using namespace std;
int cnt=0;
class NhanVien{
	private:
		string id, ht, gt, ns, dc, thue, nk;
	public:
	
		friend istream &operator >> (istream &in, NhanVien &a)
			{
				 ++cnt;
		        a.id = "000";
		        if(cnt < 10) a.id += "0" + to_string(cnt);
		        else a.id += to_string(cnt);
		        in.ignore();
		        getline(in, a.ht);
		        getline(in, a.gt);
		        getline(in, a.ns);
		        getline(in, a.dc);
		        in >> a.thue >> a.nk;
		        return in;
			}
//		string layns();
		int nam()
			{
				int y=stoi(ns.substr(6));
				return y;
			}
		
		int thang()
			{
				int m=(ns[0]-'0')*10+(ns[1]-'0');
				return m;	
			}
		int ngay()
			{
				int d=(ns[3]-'0')*10+(ns[4]-'0');
				return d;
			}
		friend ostream &operator << (ostream &out, NhanVien a)
			{
				out<<a.id<<" "<<a.ht<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.thue<<" "<<a.nk<<endl;
				return out;
			}
};
//string NhanVien::layns()
//	{
//		return this->ns;
//	}
bool cmp(NhanVien &a, NhanVien &b)
	{
		int y1=a.nam(), m1=a.thang(), d1=a.ngay();
		int y2=b.nam(), m2=b.thang(), d2=b.ngay();
		
		if(y1!=y2) return y1<y2;
		if(m1!=m2) return m1<m2;
		return d1<d2;
	}
void sapxep(NhanVien ds[], int n)
	{
		sort(ds, ds+n, cmp);
	}
int main()
	{
		NhanVien ds[50];
	    int N,i;
	    cin >> N;
	    for(i=0;i<N;i++) cin >> ds[i];
	    sapxep(ds, N);
	    for(i=0;i<N;i++) cout << ds[i];
	    return 0;
	}
