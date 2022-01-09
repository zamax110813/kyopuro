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
using mint=modint1000000007;

int main(void){
    int n,m;
    cin>>n>>m;
    vector<bool> broken(n+1,false);
    REP(i,m){
        int x;
        cin>>x;
        broken[x]=true;
    }
    mint dp[100005];
    dp[0]=1;
    FOR(i,0,n){
        FOR(j,1,2){
            if(!broken[i+j])dp[i+j]+=dp[i];
        }
    }
    cout<<dp[n].val()<<endl;

}
