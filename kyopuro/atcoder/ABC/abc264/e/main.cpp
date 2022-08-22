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

struct UnionFind{
    vector<int> par,siz;
    UnionFind(int n):par(n,-1),siz(n,1){}
    int root(int x){
        if(par[x]==-1)return x;
        else return par[x]=root(par[x]);
    }
    bool issame(int x,int y){
        return root(x)==root(y);
    }
    bool unite(int x,int y){
        x=root(x),y=root(y);
        if(x==y)return false;
        if(siz[x]<siz[y])swap(x,y);
        par[y]=x;
        siz[x]+=siz[y];
        return true;
    }
    int size(int x){
        return siz[root(x)];
    }
};

int main(void){
    int n,m,e;
    cin>>n>>m>>e;
    vector<int> u(e),v(e);
    for(int i=0;i<e;i++){
        cin>>u[i]>>v[i];
        u[i]--;v[i]--;
    }
    int q;
    cin>>q;
    vector<int> query(q);
    vector<int> connect(e,1);
    for(auto &nx:query){
        cin>>nx;
        nx--;
        connect[nx]=0;
    }
    UnionFind uf(n+m);
    vector<int> wired(n+m,0);
    for(int i=n;i<n+m;i++)wired[i]=1;
    int wcity=0;
    for(int i=0;i<e;i++){
        if(!connect[i])continue;
        if(uf.issame(u[i],v[i]))continue;
        int ul=uf.root(u[i]);
        int vl=uf.root(v[i]);
        if(wired[ul]==1&&wired[vl]==0)wcity+=uf.size(v[i]);
        if(wired[ul]==0&&wired[vl]==1)wcity+=uf.size(u[i]);
        uf.unite(u[i],v[i]);
        wired[uf.root(u[i])]=max(wired[ul],wired[vl]);
    }
    vector<int> ans;
    for(int i=q-1;i>=0;i--){
        int e_idx=query[i];
        ans.push_back(wcity);
        if(uf.issame(u[e_idx],v[e_idx]))continue;
        int ul=uf.root(u[e_idx]);
        int vl=uf.root(v[e_idx]);
        if(wired[ul]==1&&wired[vl]==0)wcity+=uf.size(v[e_idx]);
        if(wired[ul]==0&&wired[vl]==1)wcity+=uf.size(u[e_idx]);
        uf.unite(u[e_idx],v[e_idx]);
        wired[uf.root(u[e_idx])]=max(wired[ul],wired[vl]);
    }

    for(int i=q-1;i>=0;i--)cout<<ans[i]<<endl;


}
