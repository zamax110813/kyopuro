#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=1LL<<60;

struct Graph{
    struct Edge{
        int rev,from,to,cap;
        Edge(int r,int f,int t,int c):rev(r),from(f),to(t),cap(c){};
    };
    vector<vector<Edge>> list;
    Graph(int N=0):list(N){}

    size_t size(){
        return list.size();
    }

    vector<Edge> &operator [] (int i){
        return list[i];
    }

    Edge& redge(const Edge &e){
        return list[e.to][e.rev];
    }

    void run_flow(Edge &e,int f){
        e.cap-=f;
        redge(e).cap+=f;
    }

    void addedge(int from,int to,int cap){
        int fromrev=(int)list[from].size();
        int torev=(int)list[to].size();
        list[from].push_back(Edge(torev,from,to,cap));
        list[to].push_back(Edge(fromrev,to,from,0));
    }
};

struct FordFulkerson{
    static const int INF=1<<30;
    vector<bool> seen;
    FordFulkerson(){}

    //残余グラフ上でs-t
    int fodfs(Graph &G,int v,int t,int f){
        if(v==t)return f;

        seen[v]=true;
        for(auto &e:G[v]){
            if(seen[e.to])continue;
            if(e.cap==0)continue;
            int flow=fodfs(G,e.to,t,min(f,e.cap));
            if(flow==0)continue;
            G.run_flow(e,flow);
            return flow;
        }
        return 0;
    }

    int solve(Graph &G,int s,int t){
        int res=0;
        while(true){
            seen.assign((int)G.size(),0);
            int flow=fodfs(G,s,t,INF);
            if (flow==0)return res;
            res+=flow;
        }
        return 0;
    }
};

int main(void){
    int N,M;
    cin>>N>>M;
    vector<vector<ll>> dp(N,vector<ll>(N,INF));
    for(int i=0;i<M;i++){
        int a,b;
        ll w;
        cin>>a>>b>>w;
        dp[a][b]=w;
    }
    for(int v=0;v<N;v++)dp[v][v]=0;
    for(int k=0;k<N;k++)
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
    
    bool exist_negative_cycle=false;
    for(int v=0;v<N;v++){
        if(dp[v][v]<0)exist_negative_cycle=true;
    }

    if(exist_negative_cycle){
        cout<<"NEGATIVE CYCLE"<<endl;
    }else{
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(j)cout<<" ";
                if(dp[i][j]<INF/2)cout<<dp[i][j];
                else cout<<"INF";
            }
            cout<<endl;
        }
    }
}