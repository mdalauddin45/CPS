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
bool isNonDecreasing(vi arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}
int minOperationsToNonDecreasing(std::vector<int>& arr) {
    int operations = 0;
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            operations += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    return operations;
}
int main()
{
    Alauddin
    w(t)
    {
        int n;
        cin >> n;
        vi v;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            v.push_back(c);
        }
        int ans = minOperationsToNonDecreasing(v);
        cout << ans << endl;
    }
    return 0;
}