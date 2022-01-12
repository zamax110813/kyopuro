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
using Graph=vector<vector<int>>;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; } 

// struct UnionFind{
//     vector<int> par,siz;
//     UnionFind(int n):par(n,-1),siz(n,1){}
//     int root(int x){
//         if(par[x]==-1)return x;
//         else return par[x]=root(par[x]);
//     }
//     bool issame(int x,int y){
//         return root(x)==root(y);
//     }
//     bool unite(int x,int y){
//         x=root(x),y=root(y);
//         if(x==y)return false;
//         if(siz[x]<siz[y])swap(x,y);
//         par[y]=x;
//         siz[x]+=siz[y];
//         return true;
//     }
//     int size(int x){
//         return siz[root(x)];
//     }
// };

//unionfindでの解法
// int main(void){
//         int n,m;
//         cin>>n>>m;
//         UnionFind uf(n);
//         REP(i,m){
//                int a,b;
//                cin>>a>>b;
//                --a;--b;
//                uf.unite(a,b); 
//         }
//         int res=0;
//         REP(i,n)chmax(res,uf.size(i));
//         cout<<res<<endl;

// }

//dfsでの解法
// void dfs(const Graph &G,vector<bool> &seen,int v,int &cnt){
//         seen[v]=true;
//         ++cnt;
//         for(auto nv:G[v])if(!seen[nv])dfs(G,seen,nv,cnt);
// }

// int main(void){
//         int n,m;
//         cin>>n>>m;
//         Graph G(n);
//         REP(i,m){
//                 int a,b;
//                 cin>>a>>b;
//                 a--;b--;
//                 G[a].push_back(b),G[b].push_back(a);
//         }
//         int res=0;
//         vector<bool> seen(n,false);
//         REP(i,n){
//                 if(seen[i])continue;
//                 int cnt=0;
//                 dfs(G,seen,i,cnt);
//                 res=max(res,cnt);
//         }
//         cout << res << endl;
// }

//BFSでの解法

int BFS(const Graph &G,vector<int> &dist,int s){
        int cnt=0;
        dist[s]=0;
        queue<int> que;
        que.push(s);
        while(!que.empty()){
                int v=que.front();
                que.pop();
                cnt++;
                for(auto nv:G[v]){
                        if(dist[nv]==-1){
                                dist[nv]=dist[v]+1;
                                que.push(nv);
                        }
                }
        }
        return cnt;
}

int main(void){
        int n,m;
        cin>>n>>m;
        Graph G(n);
        REP(i,m){
                int a,b;
                cin>>a>>b;
                a--;b--;
                G[a].push_back(b),G[b].push_back(a);
        }
        int ans=0;
        vector<int> dist(n,-1);
        REP(i,n){
                if(dist[i]!=-1)continue;
                ans=max(ans,BFS(G,dist,i));
        }
        cout << ans << endl;
}

