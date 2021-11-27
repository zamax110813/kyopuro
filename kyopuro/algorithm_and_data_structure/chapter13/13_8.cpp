#include<bits/stdc++.h>
using namespace std;
using Graph=vector<vector<int>>;
vector<int> depth;

//根無し木を根付き木とした時の各頂点の深さを求める
void dfs(const Graph &G,int v,int p=-1,int d=0){
    depth[v]=d;
    for(auto c:G[v]){
        if(c==p)continue;
        dfs(G,c,v,d+1);
    }
}