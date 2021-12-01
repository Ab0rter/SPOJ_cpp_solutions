#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void solve()
{
    long long x,y;
    cin >> x >> y;

    if((x & 1) && (y % 2 == 0))
    {
        printf("No Number");
        return;
    }
    else if((x % 2 == 0) && (y & 1))
    {
        printf("No Number");
        return;
    }
    else if(y & 1)
    {
        if(y == x || (x-2) == y)
            printf("%lld",(long long)((x+y)-1));
        else printf("No Number");
    }
    else
    {
        if(y == x || (x-2) == y)
            printf("%lld",(long long)(x+y));
        else printf("No Number");
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;

    for(int i = 0; i+1<t; i++)
    {
        solve();
        printf("\n");
    }
    solve();
}
