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
using Edge=pair<int,int>;
using Graph=vector<vector<Edge>>;

int n;
Graph G;
void dfs(int v,int p,int pc,vector<int> &ans){
    int color=1;
    if(color==pc)color++;
    for(auto nv:G[v]){
        if(nv.first==p)continue;
        ans[nv.second]=color;
        dfs(nv.first,v,color,ans);
        color++;
        if(color==pc)color++;
    }
}

int main(void){
    cin>>n;
    G.assign(n,vector<Edge>());
    REP(i,n-1){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        G[a].emplace_back(b,i);
        G[b].emplace_back(a,i);
    }
    vector<int> color(n-1,0);
    int max_color=0;
    for(int i=0;i<n;i++)chmax(max_color,(int)G[i].size());
    dfs(0,-1,0,color);
    cout<<max_color<<endl;
    for(int i=0;i<n-1;i++)cout<<color[i]<<endl;

}

