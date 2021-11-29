#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

void solve()
{
    int n,x,y,r,mxx = INT_MIN,mxy = INT_MIN,mnx = INT_MAX,mny = INT_MAX;
    char c;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> c;

        if(c == 'p')
        {
            cin >> x >> y;
            if(x > mxx) mxx = x;
            if(x < mnx) mnx = x;
            if(y > mxy) mxy = y;
            if(y < mny) mny = y;
        }

        if(c == 'c')
        {
            cin >> x >> y >> r;

            if((x+r) > mxx) mxx = x+r;
            if((x-r) < mnx) mnx = x-r;
            if((y+r) > mxy) mxy = y+r;
            if((y-r) < mny) mny = y-r;
        }

        if(c == 'l')
        {
            for(int i = 0; i < 2; i++)
            {
                cin >> x >> y;
                if(x > mxx) mxx = x;
                if(x < mnx) mnx = x;
                if(y > mxy) mxy = y;
                if(y < mny) mny = y;
            }
        }
    }

    printf("%d %d %d %d",mnx,mny,mxx,mxy);
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
