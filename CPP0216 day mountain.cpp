#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int l, r;
    cin >> l >> r;
    while (l <= r && a[l] <= a[l + 1])// kiem tra tinh tang
        l++;
    l++;// tang len de xet tiep tinh giam
    while (l <= r && a[l] <= a[l - 1])// kiem tra tinh giam tu vi tri lam cho tinh tang ket thuc
        l++;
    if(l>r) cout<<"Yes\n";// theo dong code kia dung thi l se luon lon hon r 1 don vi , sai thi l se luon nho hon
    else cout<<"No\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}