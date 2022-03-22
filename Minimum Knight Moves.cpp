#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
typedef long long ll;

void solve()
{
    string sa, sb;
    pair<int, int> a, b;
    cin >> sa >> sb;
    a.first = sa[0]-'a';
    a.second = sa[1]-'0'-1;
    b.first = sb[0]-'a';
    b.second = sb[1]-'0'-1;

    vector<vector<vector<pair<int,int>>>> adj(8, vector<vector<pair<int,int>>>(8, vector<pair<int,int>>()));


    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(j+1 < 8)
            {
                if(i+2 < 8) adj[i][j].push_back({i+2, j+1});
                if(i-2 >= 0) adj[i][j].push_back({i-2, j+1});
            }
            if(j+2 < 8)
            {
                if(i+1 < 8) adj[i][j].push_back({i+1, j+2});
                if(i-1 >= 0) adj[i][j].push_back({i-1, j+2});
            }
            if(j-1 >= 0)
            {
                if(i+2 < 8) adj[i][j].push_back({i+2, j-1});
                if(i-2 >= 0) adj[i][j].push_back({i-2, j-1});
            }
            if(j-2 >= 0)
            {
                if(i+1 < 8) adj[i][j].push_back({i+1, j-2});
                if(i-1 >= 0) adj[i][j].push_back({i-1, j-2});
            }
        }
    }

    vector<vector<bool>> vis(8, vector<bool>(8, false));
    vector<vector<int>> dis(8, vector<int>(8, 0));
    queue<pair<int, int>> q;

    q.push(a);
    vis[a.first][a.second] = true;
    while(!q.empty())
    {
        pair<int,int> f = q.front();
        q.pop();
        for(pair<int,int> u : adj[f.first][f.second])
        {
            if(vis[u.first][u.second]) continue;
            vis[u.first][u.second] = true;
            q.push(u);
            dis[u.first][u.second] = dis[f.first][f.second] + 1;
        }
    }

    printf("%d\n", dis[b.first][b.second]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t = 1;
    cin >> t;

    while(t--)
    {
        solve();
    }
}
