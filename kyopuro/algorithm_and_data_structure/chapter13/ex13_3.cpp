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

//二部グラフか判定(BFS)

vector<int> color;
bool BFS(const Graph &G,int s){
    queue<int> que;
    que.push(s);
    color[s]=0;
    while(!que.empty()){
        int v=que.front();
        que.pop();
        for(auto next_v:G[v]){
            if(color[next_v]!=-1){
                if(color[v]==color[next_v])return false;
                continue;
            }
            color[next_v]=1-color[v];
            que.push(next_v);
        }
    }
    return true;
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
    color.assign(N,-1);
    bool is_bipartite=true;
    REP(i,N){
        if(color[i]!=-1)continue;
        if(!BFS(G,i))is_bipartite=false;
    }
    if(is_bipartite)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}