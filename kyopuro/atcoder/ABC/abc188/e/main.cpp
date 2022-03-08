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

using Graph=vector<vector<int>>;

const ll INF=1LL<<60;

int main(void){
    int n,m;
    cin>>n>>m;
    vector<ll> a(n);
    REP(i,n)cin>>a[i];
    Graph G(n);
    REP(i,m){
        int a,b;
        cin>>a>>b;
        a--;b--;
        G[a].push_back(b);
    }
    vector<ll> dp(n,INF);
    for(int i=0;i<n;i++){
        for(auto v:G[i]){
            dp[v]=min(dp[v],min(dp[i],a[i]));
        }
    }
    ll ans;
    REP(i,n){
        if(i==0)ans=a[i]-dp[i];
        else{
            if(ans<(a[i]-dp[i]))ans=a[i]-dp[i];
        }
    }
    cout<<ans<<endl;

}
