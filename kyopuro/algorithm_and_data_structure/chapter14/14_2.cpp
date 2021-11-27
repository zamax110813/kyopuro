#include<bits/stdc++.h>
using namespace std;
using Graph=vector<vector<Edge>>;

const long long INF=1LL<<60;

struct Edge{
    int to;
    long long w;
    Edge(int to,long long w) : to(to),w(w){}
};

template<class T> bool chmin(T&a,T b){
    if(a>b){
        a=b;
        return true;
    }else{
        return false;
    }
}

int main(void){
    int N,M,s;
    cin>>N>>M>>s;

    Graph G(N);
    for(int i=0;i<M;i++){
        int a,b,w;
        cin>>a>>b>>w;
        G[a].push_back(Edge(b,w));
    }

    //ベルマンフォード法
    bool exist_negative_cycle=false;
    vector<long long> dist(N,INF);
    dist[s]=0;
    for(int iter=0;iter<N;iter++){
        bool update=false;
        for(int v=0;v<N;v++){
            if(dist[v]==INF)continue;  //dist[v]=INFのときは頂点vからの緩和を行わない
            for(auto e:G[v]){
                if(chmin(dist[e.to],dist[v]+e.w)){
                    update=true;
                }
            }
        }

        //更新が行われなかったら,すでに最短路が求められている
        if(!update)break;

        //N回目の反復で更新が行われたら,負閉路をもつ
        if(iter==N-1&&update)exist_negative_cycle=true;
    }
    if(exist_negative_cycle)cout<<"NEGATIVE CYCLE"<<endl;
    else{
        for(int v=0;v<N;v++){
            if(dist[v]<INF)cout<<dist[v]<<endl;
            else cout<<"INF"<<endl;
        }
    }
}
