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

const long long INF=1LL<<60;

using mint=modint998244353;

int main(void){
    int n,m,K;
    cin>>n>>m>>K;
    vector<vector<mint>> dp(n+1,vector<mint>(K+1,0));
    dp[0][0]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<K;j++){
            for(int k=1;k<=m;k++){
                if(j+k<=K){
                    dp[i+1][j+k]+=dp[i][j];
                }
            }
        }
    }
    mint ans=0;
    for(int k=1;k<=K;k++)ans+=dp[n][k];
    cout<<ans.val()<<endl;
}
