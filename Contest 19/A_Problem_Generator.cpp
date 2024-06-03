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
int min_additional_problems(int n, int m, const string& problems) {
    vector<int> counts(7, 0);
    for (char problem : problems) {
        counts[problem - 'A']++;
    }

    vector<int> additional_problems(7, 0);
    for (int count : counts) {
        additional_problems.push_back(max(0, m - count));
    }

    int total_additional = 0;
    for (int additional : additional_problems) {
        total_additional += additional;
    }
    return total_additional;
}
int main()
{
    Alauddin
    w(t){
        int n,m; cin>>n>>m;
        string s; cin>>s;
        cout << min_additional_problems(n, m, s) << endl;

    }
    return 0;
}