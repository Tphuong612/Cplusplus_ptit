#include <bits/stdc++.h>
using namespace std;
bool cmp(string a , string b)
{
    if (a + b < b + a) return true;
    return false;
}

void solve()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin() , a.end(), cmp);
    for(int i = n - 1; i >= 0; --i) cout << a[i];
    cout << endl;
}

int main()
{
   
    int t;
    cin >> t;
    while (t--) solve();
}