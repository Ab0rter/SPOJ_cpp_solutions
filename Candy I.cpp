#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;

void solve(int n)
{
    int arr[n],sum = 0,c,add = 0,rm = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum+=arr[i];
    }

    if(sum % n != 0)
    {
        printf("-1\n");
        return;
    }

    c = sum/n;
    sort(arr,arr+n);
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > c) rm+= (arr[i]-c);
        else add+= (c-arr[i]);
    }

    printf("%d\n",rm-(rm-add));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;

    while(t != -1)
    {
        solve(t);
        cin >> t;
    }
}
