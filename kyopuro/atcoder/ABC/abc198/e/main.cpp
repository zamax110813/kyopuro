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
vector<int> color;
vector<int> num_color;
vector<int> ans;

void dfs(const Graph &G,int v,int p=-1){
    if(num_color[color[v]]==0){
        ans.push_back(v+1);
    }
    num_color[color[v]]++;
    for(auto nv:G[v]){
        if(nv==p)continue;
        dfs(G,nv,v);
    }
    num_color[color[v]]--;
}

int main(void){
    int n;
    cin>>n;
    color.assign(n,0);
    num_color.assign(1000005,0);
    REP(i,n)cin>>color[i];
    Graph G(n);
    REP(i,n-1){
        int a,b;
        cin>>a>>b;
        a--;b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    dfs(G,0);
    sort(ALL(ans));
    for(auto v:ans){
        cout<<v<<endl;
    }
}
