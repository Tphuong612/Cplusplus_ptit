#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)
#define max 21
#define inf 1e9+7
using namespace std;


int n,cmin=inf, Min, c[max][max];
int x[max], visited[max], s=0;
int ans[max];

//n: Số thành phố
//cmin: chi phí nhỏ nhất trong các chi phí để đi từ thành phố i->j.
//Min: Giá tiền tương ứng với phương án tối ưu nhất.
//c[i][j]: Giá tiền đi từ thành phố i sang thành phố j
//ans[]: Phương án tối ưu nhất.
//x[]: Các phương án xuất phát.
//visited[]: Hàm đánh dấu các thành phố đã đi qua 

void enter(){
		cin >>n; 
	for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
				{
					cin >>c[i][j];
					if(i!=j && c[i][j]!=0)
						{
							if(c[i][j]<cmin)
								cmin=c[i][j];
						}
				}
		}
	for(int i=0; i<=n; i++)
		visited[i]=0;
	Min=inf;// Giả sử với phương án đang ở trạng thái tệ nhất;
	x[1]=1;
	visited[1]=1;
}

void update_kyluc(){
	if(s+c[x[n]][1]<Min)
		{
			Min =s+c[x[n]][1];	
			for(int i=1; i<=n; i++)
				ans[i]=x[i];		
		}


	
}
void result(){
	cout <<"Phuong an toi uu tuong ung voi hanh trinh\n";
	for(int i=1; i<=n; i++)
		cout <<ans[i] <<"->";
	cout <<"1" <<endl;
	cout <<"Chi phi nho nhat: " <<Min;

}
void bvb(int k){
	
	if(s+cmin*(n-k+1) >Min)
		{
			return;	
		}

	for(int i=2; i<=n; i++)
		{
			if(visited[i]==0)
				{
					x[k]=i;
					visited[i]=1;
					s+= c[x[k-1]][x[k]];
					if(k==n)
						{
							update_kyluc();
						}
					else if(s+cmin*(n-k+1) <Min)
						{
							bvb(k+1);
						}
					s-=c[x[k-1]][x[k]];
					visited[i]=0;
				}

		}
}


int main(){
	enter();
	bvb(2);
	result();
}