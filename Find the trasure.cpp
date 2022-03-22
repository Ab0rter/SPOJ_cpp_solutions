#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
typedef long long ll;

void solve()
{
    ll n, m;
    cin >> n;

    vector<vector<ll>> adj(n);

    for(ll i = 0; i+1 < n; i++)
    {
        cin >> m;
        for(ll j = 0; j < m; j++)
        {
            ll t;
            cin >> t;
            adj[i].push_back(t-1);
        }
    }

    for(ll i = 0; i < n; i++)
    {
        sort(adj[i].begin(), adj[i].end());
    }

    vector<bool> vis(n, false);
    vector<ll> dis(n, 0), p(n, 0);
    queue<ll> q;
    q.push(0);
    vis[0] = true;
    p[0] = -1;

    while(!q.empty())
    {
        ll f = q.front();
        q.pop();

        for(ll u : adj[f])
        {
            if(vis[u]) continue;
            vis[u] = true;
            q.push(u);
            dis[u] = dis[f]+1;
            p[u] = f;
        }
    }

    if(!vis[n-1]) printf("-1");
    else
    {
        printf("%lld\n", dis[n-1]);

        vector<ll> path(0);
        for(ll v = n-1; v != -1; v = p[v])
        {
            path.push_back(v);
        }
        reverse(path.begin(), path.end());
        for(ll v : path)
        {
            if(v == n-1) break;
            printf("%lld ", v+1);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t = 1;
    cin >> t;

    for(int i = 0; i+1<t; i++)
    {
        solve();
        printf("\n");
    }
    solve();
}
