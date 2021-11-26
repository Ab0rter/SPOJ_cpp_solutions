#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
 
int rev(int n)
{
    int r = 0;
    while(n > 0)
    {
        r = (r*10)+(n%10);
        n/=10;
    }
    return r;
}
 
void solve()
{
    int a,b;
    cin >> a >> b;
    printf("%d",rev(rev(a)+rev(b)));
}
 
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 
    int t = 1;
    cin >> t;
 
    while(t--)
    {
        solve();
        printf("\n");
    }
}
 
