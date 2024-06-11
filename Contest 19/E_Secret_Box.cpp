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
 
ll cmv(ll L, ll W, ll H, ll D) {
    ll MV = 0;
    for (ll LI = 1; LI <= L; LI++) { 
        for (ll WI = 1; WI <= W; WI++) {
            if (D % (LI * WI) == 0 && (D / (LI * WI)) <= H) {
                MV = max(MV, (L - LI + 1) * (W - WI + 1) * (H - (D / (LI * WI)) + 1));
            }
        }
    }
    return MV; 
}

void solve() {
    ll L, W, H, D;
    cin >> L >> W >> H >> D;
    cout << cmv(L, W, H, D) << endl;
}
int main()
{
    Alauddin
    w(t){
    solve(); 
    }
    return 0;
}