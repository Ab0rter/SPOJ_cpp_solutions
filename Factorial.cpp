#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void solve()
{
    long long n,r = 0;
    cin >> n;
    while(n >= 5)
    {
        n/=5;
        r+=n;
    }

    printf("%lld",r);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int t = 1;
    cin >> t;

    while(t--)
    {
        solve();
        printf("\n");
    }
}
