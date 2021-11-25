#include<bits/stdc++.h>
using namespace std;
using Graph=vector<vector<int>>;


void search(const Graph &G,int s){
    int N=G.size();
    vector<bool> seen(N,false);
    queue<int> todo;

    seen[s]=true;
    todo.push(s);

    while(!todo.empty()){
        int v=todo.front();
        todo.pop();
        for(int x:G[v]){
            if(seen[x]=true)continue;
            seen[x]=true;
            todo.push(x);
        }
    }
}