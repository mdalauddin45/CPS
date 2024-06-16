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
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
 
int main()
{
    Alauddin
    int n,m; cin>>n>>m;
    int cntp=0;
    // for(int a=0;a<=sqrt(n);a++){
    //     int b=n-a*a;
    //     if(a+b*b==m)cntp++;
    // }
    for(int b=0;b<=sqrt(m);b++){
        int a=m-b*b;
        if(a*a+b==n)cntp++;
    }
    cout<<cntp<<endl;
    
    return 0;
}