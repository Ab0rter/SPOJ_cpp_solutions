#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void solve(int t)
{
    int r = 0;
    string s;
    cin >> s;

    printf("Case %d: ",t);
    
    for(char c : s) r+=c;
    if(r%3==0) printf("Yes");
    else printf("No");
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        solve(i);
        printf("\n");
    }
}
