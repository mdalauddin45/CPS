#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef vector<string> vs;
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
p findFourthRobbery(int n,int m,vector<string>g){
    vector<p>star;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(g[i][j]=='*'){
                star.push_back({i,j});
            }
        }
    }
    p p1=star[0];
    p p2=star[1];
    p p3=star[2];
    p p4;
    if (p1.first == p2.first) p4.first = p3.first; 
    else if (p1.first == p3.first) p4.first = p2.first;
    else p4.first = p1.first;
    
    if (p1.second == p2.second) p4.second = p3.second;
    else if (p1.second == p3.second) p4.second = p2.second;
    else p4.second = p1.second;
    
    return {p4.first + 1, p4.second + 1};
} 
int main()
{
    Alauddin
    int n,m; cin>>n>>m;
    vs grid(n);
    for(int i=0;i<n;i++) cin>>grid[i];
    p ans=findFourthRobbery(n,m,grid);
    cout<<ans.first<<" "<<ans.second<<endl;
    return 0;
}