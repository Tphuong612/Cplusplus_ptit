#include <bits/stdc++.h>
using namespace std;
void viethoa(char a[105])
	{
		for(int i=0;i<strlen(a);i++)
			{
				a[i]=toupper(a[i]);
			}
	}
int main()
	{
		char a[105];
		cin.getline(a, 104);
		viethoa(a);
		char *p=strtok(a," ");
		vector <string> str;
		while(p!=NULL)
			{
				str.push_back(p);// sao chep string vao mang dong;
				p=strtok(NULL," ");
			}
		for(int i=0;i<str.size()-1;i++)
			{
				for(int j=1;j<str[i].length();j++) 
					str[i][j]=tolower(str[i][j]);
				if(i<str.size()-2) cout<<str[i]<<" ";
				else cout<<str[i];
			}
		cout<<", "<<str[str.size()-1];
		
	}
