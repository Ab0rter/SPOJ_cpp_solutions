#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
typedef long long ll;

void solve()
{
    ll f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;
    --s, --g;

    vector<vector<ll>> adj(f);

    for(ll i = 0; i < f; i++)
    {
        if(i + u < f) adj[i].push_back(i+u);
        if(i - d >= 0) adj[i].push_back(i-d);
    }

    queue<ll> q;
    vector<bool> vis(f, false);
    vector<ll> dis(f, 0);

    q.push(s);
    vis[s] = true;
    while(!q.empty())
    {
        ll v = q.front();
        q.pop();
        for(ll u : adj[v])
        {
            if(vis[u]) continue;
            q.push(u);
            vis[u] = true;
            dis[u] = dis[v]+1;
        }
    }

    if(vis[g]) printf("%lld", dis[g]);
    else printf("use the stairs");
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t = 1;
    //cin >> t;

    while(t--)
    {
        solve();
    }
}
