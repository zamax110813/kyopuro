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
    ll n,p,q,r;
    cin>>n>>p>>q>>r;
    vector<ll> A(n);
    REP(i,n)cin>>A[i];
    vector<ll> csum(n+1,0);
    REP(i,n)csum[i+1]=A[i]+csum[i];
    int x,y,z,w;
    y=1;
    for(x=0;x<=n-3;x++){
        while(csum[y]-csum[x]<p&&y<=n-2)y++;
        if(csum[y]-csum[x]!=p)continue;
        auto iter=lower_bound(csum.begin(),csum.end(),q+p+csum[x]);
        int idx_lower=distance(csum.begin(),iter);
        if(csum[idx_lower]!=)


        if(x==y)y++;
    }
    cout<<"No"<<endl;
}
