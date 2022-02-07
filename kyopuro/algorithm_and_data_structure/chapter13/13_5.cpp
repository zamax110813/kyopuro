#include<bits/stdc++.h>
using namespace std;
using Graph=vector<vector<int>>;

//2部グラフ判定

vector<int> color;
bool dfs(const Graph &G,int v,int cur=0){
    color[v]=cur;
    for(auto next_v:G[v]){
        if(color[next_v]!=-1){
            if(color[next_v]==cur)return false;
            continue;
        }
        if(!dfs(G,next_v,1-cur))return false;
    }
    return true;
}

int main(void){
    int N,M;
    cin>>N>>M;
    Graph G(N);
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    color.assign(N,-1);
    bool is_bipartite=true;
    for(int v=0;v<N;v++){
        if(color[v]!=-1)continue;
        if(!dfs(G,v))is_bipartite=false;
    }
    if(is_bipartite)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}