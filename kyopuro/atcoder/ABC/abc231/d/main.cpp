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
        int n,m;
        cin>>n>>m;
        UnionFind uf(n);
        vector<int> d(n,0);
        REP(i,m){
                int a,b;
                cin>>a>>b;
                a--;b--;
                if(uf.issame(a,b)){
                        cout<<"No"<<endl;
                        return 0;
                }
                uf.unite(a,b);
                d[a]++;
                d[b]++;
        }

        REP(i,n){
                if(d[i]>2){
                        cout<<"No"<<endl;
                        return 0;
                }
        }
        cout<<"Yes"<<endl;
}

