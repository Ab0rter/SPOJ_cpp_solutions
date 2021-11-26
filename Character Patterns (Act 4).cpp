#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
 
void solve()
{
    int n,m,x,y;
    cin >> n >> m >> x >> y;
 
    for(int l = 0; l < n; l++){
        for(int h = 0; h <= (y+1)*m; h++) printf("*");
        printf("\n");
        for(int k = 0; k < x; k++){
            for(int i = 0; i < m; i++)
            {
                printf("*");
                for(int j = 0; j < y; j++) printf(".");
            }
            printf("*");
            printf("\n");
        }
    }
    for(int h = 0; h <= (y+1)*m; h++) printf("*");
    printf("\n");
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
