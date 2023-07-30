#include <bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string id, ht, gt, ns, dc, thue, nk;
	public:
		NhanVien()
			{
				this->id="00001";
				this->ht="";
				this->gt="";
				this->ns="";
				this->dc="";
				this->thue="";
				this->nk="";
			}
		void nhap()
			{
				getline(cin, ht);
				getline(cin, gt);
				getline(cin, ns);
				getline(cin, dc);
				getline(cin, thue);
				getline(cin, nk);	
			}
		void xuat()
			{
				cout<<id<<" "<<ht<<" "<<gt<<" "<<ns<<" "<<dc<<" "<<thue<<" "<<nk;
			}
};

int main()
	{
		NhanVien a;
	    a.nhap();
	    a.xuat();
	    return 0;
	}
