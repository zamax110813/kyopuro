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
   int n;
   cin>>n;
   vector<int> a(n);
   REP(i,n)cin>>a[i];
   int cnt=0;
   UnionFind uf(n);
   priority_queue<int,vector<int>> que;
   for(int i=0;i<n;i++){
       if(que.empty()){
           que.push(i);
           cnt++;
           cout<<cnt<<endl;
       }else{
            int tmp=que.top();
            if(a[tmp]==a[i]){
                uf.unite(tmp,i);
                que.push(i);
                cnt++;
                if(uf.size(i)==a[i]){
                    cnt-=a[i];
                    REP(j,a[i]){
                        que.pop();
                    }
                }
            }else{
                cnt++;
                que.push(i);
            }
            cout<<cnt<<endl;
       }
   }
}
