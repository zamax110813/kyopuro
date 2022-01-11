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
        vector<vector<int>> dp(65,vector<int>(201010));
        REP(i,n){
                int tmp;
                cin>>tmp;
                tmp--;
                dp[0][i]=tmp;
        }
        REP(i,60){
                REP(j,n){
                        dp[i+1][j]=dp[i][dp[i][j]];
                }
        }
        ll ans=0;
        FORD(i,60,0)if(k&(1LL<<i))ans=dp[i][ans];
        cout<<ans+1<<endl;

}

