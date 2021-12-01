#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void solve()
{

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    //cin >> t;

    long long n;
    cin >> n;
    while(n != 0)
    {
        long long ans = 0;
        for(long long i = 1; i <= n; i++)
            ans+=(i*i);

        printf("%lld\n",ans);
        cin >> n;
    }
}
