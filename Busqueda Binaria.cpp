#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

int bin_search(ll* arr, ll n, ll t)
{
    ll l = 0, r = n-1,m;
    while(l <= r)
    {
        m = l+((r-l)/2);
        if(arr[m] == t) return m;
        else if(arr[m] > t) r = m-1;
        else l = m+1;
    }

    return (ll)-1;
}

void solve()
{
    ll n,q,t,ans;
    cin >> n >> q;

    ll arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];

    while(q--)
    {
        cin >> t;
        ans = bin_search(arr,n,t);

        if(ans == 0 || ans == -1) printf("%lld\n",ans);
        else{
            while(arr[ans-1] == t) ans--;
            printf("%lld\n",ans);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    //cin >> t;

    while(t--)
    {
        solve();
        printf("\n");
    }
}
