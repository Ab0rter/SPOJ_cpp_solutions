#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void rot(deque<int>& q, int n)
{
    int t;
    for(int i = 0; i < n; i++)
    {
        t = q.back();
        q.pop_back();
        q.push_front(t);
    }
}

void solve()
{
    int n;
    cin >> n;

    deque<int> q(0);
    for(int i = n; i>0; i--)
    {
        q.push_front(i);
        rot(q,i);
    }

    while(!q.empty())
    {
        printf("%d ",q.front());
        q.pop_front();
    }
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
