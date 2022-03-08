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

int dp[1000005][10];

int main(void){
    int n;
    cin>>n;
    for(int i=1;i<10;i++){
        dp[1][i]=1;
    }
    for(int i=1;i<1000009;i++){
        for(int j=1;j<10;j++){
            for(int k=-1;k<2;k++){
                if(j+k<=9&&j+k>=1){
                    dp[i+1][j]=(dp[i+1][j]+dp[i][j+k])%998244353;
                }
            }
        }
    }
    int ans=0;
    for(int i=1;i<=9;i++){
        ans=(ans+dp[n][i])%998244353;
    }
    cout<<ans<<endl;
}
