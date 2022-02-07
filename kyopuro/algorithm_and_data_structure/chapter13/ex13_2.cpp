#include<bits/stdc++.h>
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

//s-tパスが存在するかどうか(BFSで)

vector<int> dist;
void BFS(const Graph &G,int s){
    queue<int> que;
    dist[s]=0;
    que.push(s);
    while(!que.empty()){
        int v=que.front();
        que.pop();
        for(auto next_v:G[v]){
            if(dist[next_v]!=-1)continue;
            que.push(next_v);
            dist[next_v]=dist[v]+1;
        }
    }
}

int main(void){
    int N,M,s,t;
    cin>>N>>M>>s>>t;
    Graph G(N);
    REP(i,M){
        int a,b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    dist.assign(N,-1);
    BFS(G,s);
    if(dist[t]!=-1)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}