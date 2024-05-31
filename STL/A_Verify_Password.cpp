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
bool isvalidpass(string p){
    bool hasdigit = false;
    bool hasletter = false;
    char prechar = '\0';
    for(char c:p){
        if(!isalnum(c)|| isupper(c)){
            return false;
        }
        if(isdigit(c)){
            hasdigit = true;
            if(c<prechar){
                return false;
            }
        }else{
            hasletter = true;
            if(c<prechar){
                return false;
            }
        }
        prechar = c;
    }
    return hasdigit && hasletter;
};
int main()
{
    Alauddin
    w(t){
        int n;cin>>n; string s; cin>>s;
        if(isvalidpass(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}