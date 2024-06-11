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
 
int main()
{
    Alauddin
    w(t){
        lli h, n;
        cin >> h >> n;

        vector<lli> v(n);
        vector<lli> vv(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> vv[i];
        }

        priority_queue<pair<lli, int>, vector<pair<lli, int>>, greater<pair<lli, int>>> result;

        for (int i = 0; i < n; ++i) {
            result.push(make_pair(1, i)); 
        }

        lli ans = 0;
        while (h > 0) {
            ans = result.top().first; 

            while (!result.empty() && result.top().first == ans) {
                int temp = result.top().second;
                result.pop();

                h -= v[temp]; 

                result.push(make_pair(ans + vv[temp], temp));
            }
        }

        cout << ans << endl;
    }
    return 0;
}
