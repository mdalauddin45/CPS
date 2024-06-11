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
const int MOD = 1e9 + 7;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    Alauddin
    w(t){
        int l, r, k;
        cin >> l >> r >> k;

        long long count = 0;
        for (int n = max(1, (int)pow(10, l)); n < (int)pow(10, r); ++n) {
            if (k * sumOfDigits(n) == sumOfDigits(k * n)) {
                count++;
            }
        }

        cout << count % MOD << endl;
    }
    return 0;
}