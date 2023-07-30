#include <iostream>
using namespace std;
#include <cstring>
#include <iomanip>
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				int ma_de;
				cin>>ma_de;
				getchar();
				char a[]="ABBADCCABDCCABD";// dung cho ma 101
				char b[]="ACCABCDDBBCDDBB";// dung cho ma 102
				char c[30];
				for(int i=0;i<15;i++)
					{
						cin>>c[i];
						if(c[i]>='a'&&c[i]<='z') c[i]=c[i]-32;
				}
				
				double diem;
				if(ma_de==101)
					{
						int khac=0;
						for(int i=0;i<15;i++)
							if(c[i]!=a[i]) ++khac;
						diem=10.0-(2.0/3.0)*khac;
					}
				if(ma_de==102)
					{
						int khac=0;
						for(int i=0;i<15;i++)
							if(c[i]!=b[i]) ++khac;
						diem=10.0-(2.0/3.0)*khac;
					}
				cout<<fixed<<setprecision(2)<<diem<<endl;
			}
	}
