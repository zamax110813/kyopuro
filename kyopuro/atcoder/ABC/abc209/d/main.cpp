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

int main(void){
    int n,q;
    cin>>n>>q;
    vector<vector<int>> G(n);
    REP(i,n-1){
        int a,b;
        cin>>a>>b;
        --a;
        --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    queue<int> que;
    vector<int> dist(n,-1);
    que.push(0);
    dist[0]=0;
    while(!que.empty()){
        int v=que.front();
        que.pop();
        for(int x:G[v]){
            if(dist[x]==-1){
                que.push(x);
                dist[x]=dist[v]+1;
            }
        }
    }
    REP(i,q){
        int a,b;
        cin>>a>>b;
        if(dist[a-1]%2!=dist[b-1]%2){
            cout<<"Road"<<endl;
        }else if(dist[a-1]%2==dist[b-1]%2){
            cout<<"Town"<<endl;
        }
    }
}
