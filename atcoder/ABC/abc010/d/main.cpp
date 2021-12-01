#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

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
    int N,g,M;
    cin>>N>>g>>M;
    vector<int> p(g);
    for(int i=0;i<g;i++)cin>>p[i];
    Graph  G(N+1);
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        G.addedge(a,b,1);
        G.addedge(b,a,1);
    }
    for(int i=0;i<g;i++){
        G.addedge(p[i],N,1);
        G.addedge(N,p[i],1);
    }
    FordFulkerson ff;
    cout<<ff.solve(G,0,N)<<endl;
    return 0;
}

