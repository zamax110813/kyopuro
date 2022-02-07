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

//サイクル検出(BFS)
//サイクルに含まれる頂点は出次数が0にならない=queueに入ることはない.
//各頂点についてqueueに入ったかどうかの情報を管理すればいい.queueに入ってない頂点があればサイクルあり.なければサイクルなし.

int main(void){
    int N;
    cin>>N;
    Graph G(N);
    vector<int> deg(N);
    REP(i,N){
        int a,b;
        cin>>a>>b;
        a--;b--;
        G[a].push_back(b);
        G[b].push_back(a);
        deg[a]++;
        deg[b]++;
    }
    queue<int> que;
    REP(i,N)if(deg[i]==1)que.push(i);
    vector<bool> ispushed(N,false);
    while(!que.empty()){
        int v=que.front();
        que.pop();
        ispushed[v]=true;
        for(auto next_v:G[v]){
            deg[next_v]--;
            if(deg[next_v]==1){
                que.push(next_v);
            }
        }
    }
    int Q;
    cin>>Q;
    REP(i,Q){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        if((!ispushed[a])&&(!ispushed[b]))cout<<2<<endl;
        else cout<<1<<endl;
    }
}