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

const ll INF=1LL<<60;

struct Edge{
    int from;
    int to;
    ll w;
    Edge(int from,int to,ll w):from(from),to(to),w(w){}
};

ll G[301][301];

int main(void){
    int n,m;
    cin>>n>>m;
    vector<Edge> edge;
    REP(i,n)REP(j,n)G[i][j]=INF;
    REP(i,n)G[i][i]=0;
    REP(i,m){
        ll a,b,w;
        cin>>a>>b>>w;
        a--;b--;
        G[a][b]=w;
        G[b][a]=w;
        edge.push_back(Edge(a,b,w));
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                G[i][j]=min(G[i][j],G[i][k]+G[k][j]);
            }
        }
    }
    int ans=0;
    for(auto e:edge){
        int from=e.from;
        int to=e.to;
        ll weight=e.w;
        bool unused=false;
        for(int k=0;k<n;k++){
            if(G[from][k]+G[k][to]<=weight&&k!=from&&k!=to)unused=true;
        }
        if(unused)ans++;
    }
    cout<<ans<<endl;
}
