#include <bits/stdc++.h>
using namespace std;
int checktn(string a)
	{
		for(int i=0;i<a.length();i++)
			if(a[i]!=a[a.length()-i-1]) return 0;
		return 1;
	}
char so(char chu)
	{
		if(chu=='a'||chu=='b'||chu=='c') return '2';
		if(chu=='d'||chu=='e'||chu=='f') return '3';
		if(chu=='g'||chu=='h'||chu=='i') return '4';
		if(chu=='j'||chu=='k'||chu=='l') return '5';
		if(chu=='m'||chu=='n'||chu=='o') return '6';
		if(chu=='p'||chu=='q'||chu=='r'||chu=='s') return '7';
		if(chu=='t'||chu=='u'||chu=='v') return '8';
		if(chu=='w'||chu=='x'||chu=='y'||chu=='z') return '9';	
	}
void test()
	{
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++) s[i]=tolower(s[i]);
		string res="";
		for(int i=0;i<s.length();i++) res+=so(s[i]);
		if (checktn(res)==1) cout<<"YES\n";
		else cout<<"NO\n";
	}
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	while(n--)
		{
			test();
		}
}
