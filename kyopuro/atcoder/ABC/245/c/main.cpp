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
    int n,k;
    cin>>n>>k;
    vector<int> a(n),b(n);
    REP(i,n)cin>>a[i];
    REP(i,n)cin>>b[i];
    vector<vector<bool>> dp(n,vector<bool>(2,false));
    dp[0][0]=true;
    dp[0][1]=true;
    for(int i=1;i<n;i++){
        for(int j=0;j<2;j++){
            if(j==0){
                if(dp[i-1][0]&&!dp[i-1][1]){
                    if(abs(a[i-1]-a[i])<=k)dp[i][0]=true;
                }else if(!dp[i-1][0]&&dp[i-1][1]){
                    if(abs(b[i-1]-a[i])<=k)dp[i][0]=true;
                }else if(dp[i-1][0]&&dp[i-1][1]){
                    if(abs(b[i-1]-a[i])<=k||abs(a[i-1]-a[i])<=k)dp[i][0]=true;
                }
            }else{
                if(dp[i-1][0]&&!dp[i-1][1]){
                    if(abs(a[i-1]-b[i])<=k)dp[i][1]=true;
                }else if(!dp[i-1][0]&&dp[i-1][1]){
                    if(abs(b[i-1]-b[i])<=k)dp[i][1]=true;
                }else if(dp[i-1][0]&&dp[i-1][1]){
                    if(abs(b[i-1]-b[i])<=k||abs(a[i-1]-b[i])<=k)dp[i][1]=true;
                }
            }
        }
    }
    if(dp[n-1][0]||dp[n-1][1]){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
