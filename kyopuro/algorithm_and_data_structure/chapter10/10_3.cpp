#include<bits/stdc++.h>
using namespace std;
using Graph=vector<vector<int>>;

int main(void){
    int N,M;
    cin>>N>>M;
    Graph G(N);
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        G[a].push_back(b);
        //無向グラフの場合は頂点を入れ替えた場合も追加
        //G[b].push_back(a);
    }
}