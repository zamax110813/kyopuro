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
    ll n,m;cin>>n>>m;
    vector<vector<ll>>v(n+1);
    while(m--){
        ll a,b;cin>>a>>b;
        v[a].push_back(b);
    }
    UnionFind d(n+1);
    vector<ll>res={0}; //頂点 N まで消した時の答えは必ず 0
    ll ans = 0; // 今の連結成分の数
    for(ll i=n;i>=2;i--){
        ans++; //頂点 i を追加
        for(auto j:v[i]){
            if(!d.issame(i,j)){
                d.unite(i,j);
                ans--; //非連結の頂点同士を繋げたとき、連結成分の数は 1 減る
            }
        }
        res.push_back(ans);
    }
    reverse(res.begin(),res.end());
    for(auto x:res)cout<<x<<endl;
    return 0;
}
