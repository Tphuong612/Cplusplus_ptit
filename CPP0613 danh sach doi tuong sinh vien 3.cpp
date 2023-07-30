#include <bits/stdc++.h>
using namespace std;
int cnt=0;
class SinhVien{
	private:
		string id,ht,lp,ns;
		float gpa;
	public:
		SinhVien()
			{
				this->id="B20DCCN0";
				this->ht="";
				this->lp="";
				this->ns="";
				this->gpa=0;
			}
		void chuanhoangay(string &s)
			{
				if(s[2]!='/') s="0"+s;
				if(s[5]!='/') s.insert(3,"0");
			}
		void chuanhoaten(string &s)
			{
				for(int i=0;i<s.length();i++)
					{
						s[i]=tolower(s[i]);
					}
				stringstream ss(s);
				string tmp;
				while(ss>>tmp)
					{
						tmp[0]=toupper(tmp[0]);
						cout<<tmp<<" ";
					}
			}
		float getgpa();
		friend istream &operator >> (istream &in, SinhVien &a)
			{
//				in.ignore();
				scanf("\n");
				cnt++;
				if(cnt<10) a.id+="0"+to_string(cnt);
				else a.id+= to_string(cnt);
				getline(in, a.ht);
				getline (in, a.lp);
				getline(in, a.ns);
				in>>a.gpa;
				return in;
			}
		friend ostream &operator << (ostream &out, SinhVien a)
			{
				a.chuanhoangay(a.ns);
				out<<a.id<<" ";
				a.chuanhoaten(a.ht);
				out<<a.lp<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
				return out;
			}
};
float SinhVien::getgpa()
	{
		return this->gpa;
	}
bool cmp(SinhVien &a, SinhVien &b)
	{
		return a.getgpa()>b.getgpa();
	}
void sapxep(SinhVien ds[], int n)
	{
		sort(ds,ds+n,cmp);
	}
int main()
	{
		SinhVien ds[50];
		int N,i;
		cin>>N;
		for(i=0;i<N;i++) cin>>ds[i];
		sapxep(ds,N);
		for(i=0;i<N;i++) cout<<ds[i];
		return 0;
	}
