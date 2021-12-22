#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void solve()
{
    int n,c;
    cin >> n >> c;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr+n);

    int l = arr[0], r = arr[n-1],m,ans = 0;

    while(l <= r)
    {
        m = l+(r-l)/2;
        int cnt = 1, last = 0;

        for(int i = 1; i < n; i++)
        {
            if(arr[i]-arr[last] >= m)
            {
                cnt++;
                last = i;
            }
        }

        if(cnt < c) r = m-1;
        else{
            l = m+1;
            ans = max(ans,m);
        }
    }

    printf("%d",ans);
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
