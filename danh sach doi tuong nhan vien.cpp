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
		friend ostream &operator << (ostream &out, NhanVien a)
			{
				out<<a.id<<" "<<a.ht<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.thue<<" "<<a.nk<<endl;
				return out;
			}
};
int main()
	{
		NhanVien ds[50];
	    int N,i;
	    cin >> N;
	    for(i=0;i<N;i++) cin >> ds[i];
	    for(i=0;i<N;i++) cout << ds[i];
	    return 0;
	}
