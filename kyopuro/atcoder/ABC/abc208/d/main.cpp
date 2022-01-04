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
const long long INF=1LL<<60;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; } 

int main(void){
    int n,m;
    cin>>n>>m;
    ll dist[401][401];
    REP(i,n)REP(j,n)dist[i][j]=INF; 
    REP(i,n)dist[i][i]=0;
    REP(i,m){
        int a,b,c;
        cin>>a>>b>>c;
        a--;b--;
        dist[a][b]=c;
    }
    ll ans=0;
    REP(k,n){
        REP(i,n)REP(j,n)chmin(dist[i][j],dist[i][k]+dist[k][j]);
        REP(i,n)REP(j,n)if(dist[i][j]<INF)ans+=dist[i][j];
    }
    cout<<ans<<endl;
}
