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
ll solve(ll x, ll y, ll z) {
    ll result = 1;
    x %= z;
    if (x == 0) return 0;

    while (y > 0) {
        if (y & 1) {
            result = (result * x) % z;
        }
        y >>= 1;
        x = (x * x) % z;
    }
    return result;
}
int main()
{
    Alauddin
    w(t){
        ll l, u, k;
        cin >> l >> u >> k;

        if (k >= 10) {
            cout << 0 << endl;
            continue;
        }

        ll maxDigit = 10 / k;
        if (10 % k) {
            maxDigit++;
        }

        ll highCount = solve(maxDigit, u, 1000000007);
        ll lowCount = solve(maxDigit, l, 1000000007);
        ll validCount = (highCount - lowCount + 1000000007) % 1000000007;

        cout << validCount << endl;
    }
    return 0;
}