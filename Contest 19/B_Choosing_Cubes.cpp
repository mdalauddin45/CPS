#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
typedef long long int lli;
const int N = 1e5 + 7;
int nums[N];

#define cn(n) \
    int n;    \
    cin >> n;
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define Alauddin                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define pi M_PI
void cube(int n, int f, int k, vi v)
{
    int fv = v[f - 1];
    sort(v.begin(), v.end(), greater<int>());
    int cfr = 0;
    for (int i = 0; i < k; ++i){
        if (v[i] == fv) cfr++;
    }
    int tcf = count(v.begin(), v.end(), fv);
    if (cfr == tcf) cout << "YES" << endl;
    else if (cfr > 0) cout << "MAYBE" << endl;
    else cout << "NO" << endl;
}
int main()
{
    Alauddin
    w(t)
    {
        int n, f, k;
        cin >> n >> f >> k;
        vi v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        cube(n, f, k, v);
    }
    return 0;
}
