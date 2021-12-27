#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

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
    int n;
    cin>>n;
    vector<tuple<int,int,int>> edge(n-1);
    for(auto& [w,u,v]:edge){
        cin>>u>>v>>w;
        u-=1;
        v-=1;
    }
    sort(edge.begin(),edge.end());
    UnionFind dsu(n);
    ll ans=0;
    for(const auto& [w,u,v]:edge){
        ans+=(ll)w*dsu.size(u)*dsu.size(v);
        dsu.unite(u,v);
    }
    cout<<ans<<endl;
}
