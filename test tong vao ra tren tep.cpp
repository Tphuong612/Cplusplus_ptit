#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

int calc(string &s)
{
    if(s.length() > 9) return 0;
    ll n = 0;
    for(char i : s)
    {
        if(!isdigit(i)) return 0;
        n = n * 10 + i - '0';
    }
    if(n <= 2147483647) return (int) n;
    return 0;
}

int main()
{
    faster();
    ifstream fin("DATA.in");
    string s;
    ll sum = 0;
    while(fin >> s) sum += calc(s);
    cout << sum;
    return 0;
}