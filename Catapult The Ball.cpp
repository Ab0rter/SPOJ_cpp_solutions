#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
 
int main()
{
    int n,m,l,r,ans = 0;
    cin >> n >> m;
    int lg = log2(n)+1;
    int st[n][lg];
    for(int i = 0; i < n; i++) cin >> st[i][0];
    for(int j = 1; j < lg; j++)
        for(int i = 0; i + (1<<j) <= n; i++)
            st[i][j] = max(st[i][j-1],st[i+(1<<(j-1))][j-1]);
 
    while(m--)
    {
        cin >> l >> r;
        --l,--r;
 
        if(l+1==r || r+1==l || l==r) ans++;
        else if(l < r)
        {
            l++;
            r--;
            int j = log2(r-l+1);
            int c = max(st[l][j],st[r-(1<<j)+1][j]);
            if(c <= st[l-1][0]) ans++;
        }
        else
        {
            l--;
            r++;
            int j = log2(l-r+1);
            int c = max(st[r][j],st[l-(1<<j)+1][j]);
            if(c <= st[r-1][0]) ans++;
        }
    }
    printf("%d\n",ans);
}
 
