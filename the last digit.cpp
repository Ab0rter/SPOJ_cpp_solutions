#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;

ll pow(ll a, ll b)
{
    if(b == 0)
        return 1;
    ll r = pow(a,b/2);
    r*=r;
    if(b & 1) r*=a;
    return r%10;
}

void solve()
{
    ll a, b,ans;
    cin >> a >> b;

    ans = pow(a%10,b);
    printf("%lld",ans);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        printf("\n");
    }
}
