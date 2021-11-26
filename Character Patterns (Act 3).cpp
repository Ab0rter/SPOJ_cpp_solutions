#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
 
void solve()
{
    int n,m;
    cin >> n >> m;
 
    for(int j = 0; j <=3*m; j++) printf("*");
    printf("\n");
    for(int k = 1; k<=n; k++)
    {
        for(int i =1; i<=2;i++)
        {
            for(int j = 0; j < 3*m; j++)
            {
                if(j == 0 || j%3==0) printf("*");
                else printf(".");
            }
            printf("*");
            printf("\n");
        }
 
        /******/
        for(int j = 0; j <=3*m; j++) printf("*");
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
 
