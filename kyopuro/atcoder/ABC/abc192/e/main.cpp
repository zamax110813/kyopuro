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

struct Edge{
    int to;
    int w;
    int k;
    Edge(int to,int w,int k):to(to),w(w),k(k){}
};

using Graph=vector<vector<Edge>>;

int main(void){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    x--;
    y--;
    Graph G(n);
    REP(i,m){
        int a,b,t,k;
        cin>>a>>b>>t>>k;
        a--;b--;
        G[a].push_back(Edge(b,t,k));
        G[b].push_back(Edge(a,t,k));
    }
    vector<ll> dist(n,INF);
    vector<int> vis(n,0);
    dist[x]=0;
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> que;
    que.push(make_pair(0,x));
    while(!que.empty()){
        auto q=que.top();
        que.pop();
        int v=q.second;
        ll t=q.first;
        if(t>dist[v])continue;
        for(auto nv:G[v]){
            int to=nv.to;
            int cost1=nv.w;
            int k=nv.k;
            ll cost2=(t+k-1)/k*k+cost1;
            if(chmin(dist[to],cost2))que.push(make_pair(dist[to],to));
        }
    }
    if(dist[y]!=INF)cout<<dist[y]<<endl;
    else cout<<-1<<endl;
    return 0;
}
