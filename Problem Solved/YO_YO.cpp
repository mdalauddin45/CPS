#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
typedef long long int lli;
 
#define cn(n)           int n;cin>>n;
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define pi              M_PI 
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
vector<int> generatePrimes(int limit) {
    vector<int> primes;
    int num = 2;
    while (primes.size() < limit) {
        if (isPrime(num)) {
            primes.push_back(num);
        }
        num++;
    }
    return primes;
}
int main()
{
    Alauddin
    int n;cin >> n;
    int totalPrimes = n * n;
    vector<int> primes = generatePrimes(totalPrimes);

    vector<vector<int>> matrix(n, vector<int>(n));
    int index = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; ++j) {
                matrix[i][j] = primes[index++];
            }
        } else {
            for (int j = n- 1; j >= 0; --j) {
                matrix[i][j] = primes[index++];
            }
        }
    }
    for (const auto& row : matrix) {
        for (const auto& num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}