#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
typedef long long int lli;
const int N=1e5+7;
int nums[N];
 
#define cn(n)           int n;cin>>n;
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define pi              M_PI 

class ds
{
    vector<ll> pp, ss;
    ll n;

public:
    ds(ll n)
    {
        this->n = n;
        pp.resize(n);
        ss.resize(n);
        for (ll i = 0; i < n; i++)
        {
            pp[i] = i;
            ss[i] = 1;
        }
    }

    ll find(ll a)
    {
        if (pp[a] == a)
        {
            return a;
        }
        return pp[a] = find(pp[a]);
    }

    void unite(ll a, ll b)
    {
        a = find(a);
        b = find(b);
        if (a != b)
        {
            if (ss[a] < ss[b])
            {
                swap(a, b);
            }
            pp[b] = a;
            ss[a] += ss[b];
        }
    }

    bool same(ll a, ll b)
    {
        return find(a) == find(b);
    }

    ll getSize(ll a)
    {
        return ss[find(a)];
    }
};

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    ds ds(n * m);
    ll dx[] = {1, -1, 0, 0};
    ll dy[] = {0, 0, 1, -1};
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (a[i][j] == '#')
            {
                for (ll k = 0; k < 4; k++)
                {
                    ll ni = i + dx[k];
                    ll nj = j + dy[k];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m && a[ni][nj] == '#')
                    {
                        ds.unite(i * m + j, ni * m + nj);
                    }
                }
            }
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (a[i][j] == '#')
            {
                ans = max(ans, ds.getSize(i * m + j));
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        ll thisRow = 0;
        set<ll> s;
        for (ll j = 0; j < m; j++)
        {
            if (a[i][j] == '.')
            {
                thisRow++;
                for (ll k = 0; k < 4; k++)
                {
                    ll ni = i + dx[k];
                    ll nj = j + dy[k];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m && a[ni][nj] == '#')
                    {
                        if (s.find(ds.find(ni * m + nj)) == s.end())
                        {
                            thisRow += ds.getSize(ni * m + nj);
                            s.insert(ds.find(ni * m + nj));
                        }
                    }
                }
            }
        }
        ans = max(ans, thisRow);
    }
    for (ll i = 0; i < m; i++)
    {
        ll thisCol = 0;
        set<ll> s;
        for (ll j = 0; j < n; j++)
        {
            if (a[j][i] == '.')
            {
                thisCol++;
                for (ll k = 0; k < 4; k++)
                {
                    ll ni = j + dx[k];
                    ll nj = i + dy[k];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m && a[ni][nj] == '#')
                    {
                        if (s.find(ds.find(ni * m + nj)) == s.end())
                        {
                            thisCol += ds.getSize(ni * m + nj);
                            s.insert(ds.find(ni * m + nj));
                        }
                    }
                }
            }
        }
        ans = max(ans, thisCol);
    }
    cout << ans << endl;
}

 
int main()
{
    Alauddin
    w(t){
        solve();
    }
    return 0;
}
