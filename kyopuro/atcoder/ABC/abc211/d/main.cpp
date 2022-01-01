#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
using mint=modint1000000007;
const long long INF=1LL<<60;
using Graph=vector<vector<int>>;

int main(void){
    int n,m;
    cin>>n>>m;
    Graph G(n);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    vector<ll> dist(n,INF);
    dist[0]=0;
    queue<int> que;
    que.push(0);
    vector<int> vs;
    while(!que.empty()){
        int v=que.front();
        que.pop();
        vs.push_back(v);
        for(auto w:G[v]){
            if(dist[w]!=INF)continue;
            dist[w]=dist[v]+1;
            que.push(w);
        }
    }
    vector<mint> dp(n);
    dp[0]=1;
    for(int v:vs){
        for(int to:G[v]){
            if(dist[to]==dist[v]+1){
                dp[to]+=dp[v];
            }
        }
    }
    cout<<dp[n-1].val()<<endl;
}
