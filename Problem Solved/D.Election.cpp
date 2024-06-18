#include <bits/stdc++.h>
using namespace std;

#define cn(n)           int n; cin >> n;
#define w(t)            int t; cin >> t; while (t--)
#define Alauddin        ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define REP(i, a, b)    for (int i = a; i <= b; i++)
#define int long long
typedef vector<int> vi;

void solve() {
    cn(n)
    cn(m)
    
    vi c(n);
    REP(i, 0, n - 1) {
        cin >> c[i];
    }
    
    int p = 0;
    vi d = c;
    
    d[0] += m;
    int y = *max_element(c.begin(), c.end());
    int z = max_element(d.begin(), d.end()) - d.begin();
    
    REP(j, 0, n - 1) {
        if (j == z) {
            cout << 0 << " ";
            p += c[j];
            continue;
        }
        
        if (c[j] + p + m >= y) {
            cout << j << " ";
        } else {
            cout << j + 1 << " ";
        }
        p += c[j];
    }
    
    cout << endl;
}

signed main() {
    Alauddin
    w(t) {
        solve();
    }
    return 0;
}
