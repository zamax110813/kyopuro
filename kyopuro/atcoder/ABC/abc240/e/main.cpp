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

vector<bool> seen;
int id=1;
void dfs2(const Graph &G,int v,vector<pair<int,int>> &minmax,int p=-1){
    seen[v]=true;
    for(auto nv:G[v]){
        if(seen[nv])continue;
        dfs2(G,nv,minmax,v);
    }
    if(G[v].size()==1&&v!=0)return;
    int max=0;
    int min=10101010;
    for(auto nv:G[v]){
        if(nv==p)continue;
        chmin(min,minmax[nv].first);
        chmin(max,minmax[nv].second);
    }
    minmax[v].first=min;
    minmax[v].second=max;
}

void dfs1(const Graph &G,int v,vector<pair<int,int>> &minmax,int p=-1){
    if(G[v].size()==1&&v!=0){
        minmax[v].first=id;
        minmax[v].second=id;
        id++;
    }
    for(auto nv:G[v]){
        if(nv==p)continue;
        dfs1(G,nv,minmax,v);
    }
}

int main(void){
    int n;
    cin>>n;
    Graph G(n);
    REP(i,n-1){
        int u,v;
        cin>>u>>v;
        u--;v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    seen.assign(n,false);
    vector<pair<int,int>> minmax(n);
    dfs1(G,0,minmax);
    dfs2(G,0,minmax);
    REP(i,n){
        cout<<minmax[i].first<<" "<<minmax[i].second<<endl;
    }
}
