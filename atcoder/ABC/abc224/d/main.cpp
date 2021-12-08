#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using Graph=vector<vector<ll>>;


int main(void){
    int m;
    cin>>m;
    Graph g(9);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a-1].push_back(b-1);
        g[b-1].push_back(a-1);
    }
    int p;
    string state="999999999";
    for(int i=0;i<8;i++){
        cin>>p;
        state[p-1]=i+'1';
    }
    map<string,int> dist;
    queue<string> Q;
    dist[state]=0;
    Q.push(state);
    while(!Q.empty()){
        string v=Q.front();
        Q.pop();
        int index;
        for(int i=0;i<9;i++){
            if(v[i]=='9')index=i;
        }
        for(auto u:g[index]){
            string t=v;
            swap(t[u],t[index]);
            if(dist.count(t))continue;
            dist[t]=dist[v]+1;
            Q.push(t);
        }
    }
    if(dist.count("123456789")==0)cout<<"-1"<<endl;
    else cout<<dist["123456789"]<<endl;
}
