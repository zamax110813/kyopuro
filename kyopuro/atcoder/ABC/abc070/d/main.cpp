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

using Edge=pair<int,ll>;
using Graph=vector<vector<Edge>>;

void dfs(const Graph & G,int v,int p,ll sum,vector<ll> &dist){
    dist[v]=sum;
    for(auto nv:G[v]){
        if(nv.first==p)continue;
        dfs(G,nv.first,v,sum+nv.second,dist);
    }
}

int main(void){
    int n;
    cin>>n;
    Graph G(n);
    REP(i,n-1){
        ll a,b,c;
        cin>>a>>b>>c;
        a--;b--;
        G[a].push_back({b,c});
        G[b].push_back({a,c});
    }
    int q,k;
    cin>>q>>k;
    k--;
    vector<ll> dist(n,0);
    dfs(G,k,-1,0,dist);
    REP(i,q){
        int x,y;
        cin>>x>>y;
        x--;y--;
        cout<<dist[x]+dist[y]<<endl;
    }
}

