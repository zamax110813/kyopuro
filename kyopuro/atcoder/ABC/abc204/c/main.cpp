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
using Graph=vector<vector<int>>;

int main(void){
    int n,m;
    cin>>n>>m;
    Graph G(n);
    REP(i,m){
        int a,b;
        cin>>a>>b;
        --a;
        --b;
        G[a].push_back(b);
    }
    int ans=0;
    vector<int> dist;
    REP(i,n){
        dist.assign(n,-1);
        int s=i;
        dist[s]=0;
        queue<int> que;
        que.push(s);
        while(!que.empty()){
            int v=que.front();
            que.pop();
            for(auto nv:G[v]){
                if(dist[nv]!=-1)continue;
                que.push(nv);
                dist[nv]=dist[v]+1;
            }
        }
        REP(i,n)if(dist[i]!=-1)ans++;
    }
    cout<<ans<<endl;
}
