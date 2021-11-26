#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
 
void solve()
{
    int n,m;
    cin >> n >> m;
 
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(i&1)
            {
                if(j&1) printf("*");
                else printf(".");
            }
            else
            {
                if(j&1) printf(".");
                else printf("*");
            }
        }
        printf("\n");
    }
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
 
