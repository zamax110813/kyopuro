#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long INF=1LL<<60;

#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=ll(b);i--)
#define FORA(i,I) for(const auto& i;I)

//x:コンテナ
#define ALL(x) x.begin(),x.end()
#define SIZE(x) ll(x.size())

int main(void){
    int n;
    cin>>n;
    vector<string> s(n);
    REP(i,n)cin>>s[i];
    ll dp[65][2];
    dp[0][0]=1;
    dp[0][1]=1;
    REP(i,n){
        if(s[i]=="AND"){
            dp[i+1][1]=dp[i][1];
            dp[i+1][0]=dp[i][1]+2*dp[i][0];
        }else{
            dp[i+1][1]=dp[i][0]+2*dp[i][1];
            dp[i+1][0]=dp[i][0];
        }
    }
    cout<<dp[n][1]<<endl;
}


