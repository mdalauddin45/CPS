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
int bulbsOn(int n) {
    return(int)sqrt(n);;
}
int main()
{
    Alauddin
    w(t){
        int n; cin>>n;
        int result = bulbsOn(n);
        cout << result << endl;
    }
    return 0;
}