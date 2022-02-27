#include<bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<(ll)n;i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)b;i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)b;i--)
#define FORA(i,I) for(const auto& i:I)
#define ALL(x) x.begin(),x.end()
#define SIZE(x) ll(x.size())
#define F first
#define S second

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; } 

int main(void){
    int n;
    ll k;
    cin>>n>>k;
    vector<ll> a(n);
    REP(i,n)cin>>a[i];
    vector<vector<ll>> dp(40,vector<ll>(n+1,0));
    REP(i,n)dp[0][i]=a[i];
    REP(i,39){
        REP(j,n){
            dp[i+1][j]=dp[i][j]+dp[i][(j+dp[i][j])%n];
        }
    }
    ll ans=0;
    for(int i=0;i<40;i++){
        if(k&1){
            ans+=dp[i][ans%n];
        }
        k=(k>>1);    //右シフト(1/2してる)
    }
    cout<<ans<<endl;
    return 0;
}
