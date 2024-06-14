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
#define fs(n) for (int i = 0; i < n; i++)
#define pi              M_PI 
 
int main()
{
    Alauddin
    w(t){
        int n;
        cin >> n;

        vi roundNumbers;
        int multiplier = 1;

        while (n > 0) {
            int digit = n % 10;
            n /= 10;

            if (digit != 0) {
                roundNumbers.push_back(digit * multiplier);
            }

            multiplier *= 10;
        }

        cout << roundNumbers.size() << endl;
        fs(roundNumbers.size()){
            cout << roundNumbers[i] << " ";
        }

        cout << endl;
    }
    return 0;
}