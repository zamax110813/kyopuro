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

int main(void){
    ll N,K;
    cin>>N>>K;
    if(K==0){
        cout<<N*N<<endl;
        return 0;
    }
    ll ans=0;
    for(ll b=K+1;b<=N;b++){
        ll n=(N+1)/b;
        ans+=(b-K)*n;
        ll L=K+b*n;
        ll R=N;
        if(L<=R)ans+=R-L+1;
    }
    cout<<ans<<endl;
}
