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
   int n,x;
   cin>>n>>x;
   vector<int> a(n),b(n);
   REP(i,n){
       cin>>a[i]>>b[i];
   }
   vector<vector<bool>> dp(n+1,vector<bool>(100000,false));
   dp[0][0]=true;
   for(int i=0;i<n;i++){
       for(int j=0;j<11000;j++){
           if(dp[i][j]){
               dp[i+1][j+a[i]]=true;
               dp[i+1][j+b[i]]=true;
           }
       }
   }
   if(dp[n][x])cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
}
