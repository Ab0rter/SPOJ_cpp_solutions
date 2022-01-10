#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b,c,ans = 0;
    cin >> a >> b >> c;
    while(a != 0 || b != 0 || c!=0)
    {
        if((b-a) == (c-b))
        {
            ans = c+(c-b);
            printf("AP %d\n",ans);
        }
        else
        {
            ans = c*(c/b);
            printf("GP %d\n",ans);
        }

        cin >> a >> b >> c;
    }
}
