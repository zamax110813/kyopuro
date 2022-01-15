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
    int n,k,r,s,p;
    vector<int> pnt(3);
    cin>>n>>k;
    REP(i,3){
            cin>>pnt[i];
    }
    string t;
    cin>>t;
    vector<int> win;
    REP(i,n){
            if(t[i]=='r')win.push_back(2);
            else if(t[i]=='s')win.push_back(0);
            else win.push_back(1);
    }
    vector<vector<int>> dp(n+1,vector<int>(3,0));
    REP(i,n){
           REP(j,3){
                   if(i>=k){
                           if(j==t[i-k])dp[i+1][j]=max(dp[i][0],max(dp[i][1],dp[i][2]));
                           else dp[i+1][j]=max(dp[i][0],max(dp[i][1],dp[i][2]))+pnt[j];
                   }else{
                        dp[i+1][j]=max(dp[i][0],max(dp[i][1],dp[i][2]))+pnt[j];
                   }
           }
    }
    int ans=0;
    REP(i,n){
            if(dp[n][i]>ans)ans=dp[n][i];
    }
    cout << ans << endl;


}
