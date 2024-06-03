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
void solve() {
    int n;
    cin >> n;
    map<int, int> v1, v2;
    vi a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) {
        v2[b[i]]++;
        if (a[i] == b[i]) b[i] = -1;
    }
    int m;
    cin >> m;
    vi modific(m);

    for (int i = 0; i < m; i++) {
        cin >> modific[i];
        v1[modific[i]]++;
    }
    bool ans = true;
    
    if (v2[modific[m - 1]] == 0) ans = false;
    for (int i = 0; i < n; i++) {
        if (b[i] != -1) {
            if (v1[b[i]] != 0) {
                v1[b[i]]--;
                b[i] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (b[i] != -1) {
            ans = false;
            break;
        }
    }
    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    Alauddin
    w(t){
        solve();
    }
    return 0;
}
