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

vector<vector<int>> kthmax;
vector<bool> seen;
vector<int> x;
void dfs(const Graph &G,int v,int par=-1){
    seen[v]=true;
    for(auto nv:G[v]){
        if(seen[nv])continue;
        dfs(G,nv,v);
    }
    vector<int> tmp;
    tmp.push_back(x[v]);
    for(auto child:G[v]){
        if(child==par)continue;
        for(auto i:kthmax[child]){
            tmp.push_back(i);
        }
    }
    sort(ALL(tmp),greater<int>());
    for(int i=0;i<(int)tmp.size();i++){
        if(i>=20)break;
        kthmax[v].push_back(tmp[i]);
    }
}

int main(void){
    int n,q;
    cin>>n>>q;
    Graph G(n);
    x.resize(n);
    seen.assign(n,false);
    kthmax.resize(n);
    REP(i,n){
        cin>>x[i];
    }
    REP(i,n-1){
        int a,b;
        cin>>a>>b;
        --a;
        --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    dfs(G,0);
    REP(i,q){
        int v,k;
        cin>>v>>k;
        --v;--k;
        cout<<kthmax[v][k]<<endl;
    }
    return 0;
}
