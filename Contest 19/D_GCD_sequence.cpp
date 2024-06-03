#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
typedef long long int lli;
const int N=1e5+7;

#define cn(n)           lli n;cin>>n;
#define w(t)            lli t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b)      for (auto i = a; i <= b; ++i)
#define pi              M_PI 

lli gcd(lli x, lli y) {
    while (y != 0) {
        lli temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

bool isNonDecreasing(vi arr) {
    return is_sorted(arr.begin(), arr.end());
}

bool solve(vi a) {
    int n = a.size();
    if (n == 1) return true; 
    vi b(n - 1);
    for (auto i = 0; i < n - 1; ++i) {
        b[i] = gcd(a[i], a[i + 1]);
    }

    if (isNonDecreasing(b)) {
        return true;
    }

    for (auto i = 0; i < n; ++i) {
        vi temp;
        for (auto j = 0; j < n; ++j) {
            if (j != i) {
                temp.push_back(a[j]);
            }
        }

        vi new_b(temp.size() - 1);
        for (auto j = 0; j < temp.size() - 1; ++j) {
            new_b[j] = gcd(temp[j], temp[j + 1]);
        }

        if (isNonDecreasing(new_b)) {
            return true;
        }
    }
    return false;
}

int main() {
    Alauddin
    w(t) {
        cn(n)
        vi a(n);
        for (auto& x : a) cin >> x;
        if (solve(a)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
