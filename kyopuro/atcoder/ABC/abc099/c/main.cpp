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

int dp[101010];

int f(int cu){
    if(cu==0)return 0;
    if(dp[cu])return dp[cu];
    int res=1e9;
    chmin(res,f(cu-1)+1);
    int x=6;
    while(x<=cu){
        chmin(res,f(cu-x)+1);
        x*=6;
    }
    x=9;
    while(x<=cu){
        chmin(res,f(cu-x)+1);
        x*=9;
    }
    return dp[cu]=res;
}

int main(void){
    ll n;
    cin>>n;
    cout<<f(n)<<endl;
}
