#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
 
const int MAXN = 1e7, K = 25;
int st[MAXN][K+1];
 
void solve()
{
    int n,arr[100000],q,r,l,ans;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> q;
 
    for(int i = 0; i < n; i++) st[i][0] = arr[i];
 
    for(int j = 1; j<=K; j++)
        for(int i = 0; i + (1<<j) <= n; i++)
            st[i][j] = min(st[i][j-1], st[i+(1<<(j-1))][j-1]);
 
    while(q--)
    {
        cin >> l >> r;
        int j = log2(r-l+1);
        ans = min(st[l][j],st[r-(1<<j)+1][j]);
        printf("%d\n",ans);
    }
}
 
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
 
    int t = 1;
    //cin >> t;
 
    while(t--)
    {
        solve();
        printf("\n");
    }
}
