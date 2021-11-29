#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

void solve()
{
    int n,x,y;
    cin >> n >> x >> y;
    
    for(int i = 2; i <= n; i++)
        if(i%x==0 && i%y!=0) printf("%d ",i);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
        printf("\n");
    }
}
