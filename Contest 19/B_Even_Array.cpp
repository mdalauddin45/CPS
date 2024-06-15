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
        cn(n);
        vi v(n);
        int mismatch_count = 0;
        for(int i = 0; i<n;i++) {
            cin>>v[i];
            if (i % 2 != v[i] % 2) {
                mismatch_count++;
            }
        }
        if (mismatch_count % 2 == 0) {
            cout << mismatch_count / 2 << endl;
        } else {
            bool possible = false;
            for (int i = 0; i < n; ++i) {
                for (int j = i + 1; j < n; ++j) {
                    if (i % 2 != j % 2 && v[i] % 2 == v[j] % 2) {
                        possible = true;
                        break;
                    }
                }
                if (possible) break;
            }
            if (possible) {
                cout << 1 << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
