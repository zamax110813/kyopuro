#include<bits/stdc++.h>
using namespace std;
using Graph=vector<vector<int>>;

//木上の探索
//v:現在探索中の頂点,p:vの親(vが根の時は-1)
void dfs(const Graph &G,int v,int p=-1){
    for(auto c:G[v]){
        if(c==p)continue;
        dfs(G,c,v);
    }
}