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

//トポロジカルソート(BFS)
//辺を逆向きに張る.シンク(出次数が0の頂点)をqueueに入れる.シンクに向かって辺が出てる頂点の出次数を-1する.0になったらqueueに入れる.
//queueから出した順を逆に並び替えることでトポロジカルソートが得られる.

int main(void){
    int N,M;
    cin>>N>>M;
    Graph G(N);
    vector<int> deg(N,0);
    REP(i,M){
        int a,b;
        cin>>a>>b;
        G[b].push_back(a);
        deg[a]++;
    }
    queue<int> que;
    REP(i,N)if(deg[i]==0)que.push(i);
    vector<int> order;
    while(!que.empty()){
        int v=que.front();
        que.pop();
        order.push_back(v);
        for(auto next_v:G[v]){
            deg[next_v]--;
            if(deg[next_v]==0)que.push(next_v);
        }
    }
    reverse(order.begin(),order.end());
    REP(i,N)cout<<order[i]<<endl;
}