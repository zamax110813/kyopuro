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
using Graph=vector<vector<int>>

//連結成分の個数を数える
//深さ優先探索を用いる場合
vector<bool> seen;
void dfs(const Graph &G,int v){
    seen[v]=true;
    for(auto next_v:G[v]){
        if(seen[next_v])continue;
        dfs(G,next_v);
    }
}

int main(void){
    int N,M;
    cin>>N>>M;
    Graph G(N);
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int ans=0;
    seen.assign(N,false);
    for(int v=0;v<N;v++){
        if(seen[v])continue;
        dfs(G,v);
        ans++;
    }
    cout<<ans<<endl;
}

//幅優先探索を用いる場合
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
            dist[next_v]+=dist[v]+1;
            que.push(next_v);
        }
    }
}

int main(void){
    int N,M;
    cin>>N>>M;
    Graph G(N);
    REP(i,M){
        int a,b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    int ans=0;
    dist.assign(N,-1);
    REP(i,N){
        if(dist[i]!=-1)continue;
        BFS(G,i);
        ans++;
    }
    cout<<ans<<endl;
}