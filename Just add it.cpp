#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;
ll mod = 1e7+7;

ll binpow(ll a, ll b)
{
    ll ans = 1;
    a = a%mod;
    while(b)
    {
        if(b&1)
            ans = ans*a%mod;
        a = a*a%mod;
        b >>= 1;
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll ans,n,k;
    cin >> n >> k;

    while(n != 0 || k != 0)
    {
        ans = 2*(binpow(n-1,n-1)+binpow(n-1,k)) + binpow(n,k) + binpow(n,n);
        ans%=mod;
        printf("%lld\n",ans);
        cin >> n >> k;
    }
}
