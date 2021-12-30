#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using Graph=vector<vector<int>>;
int n;
Graph G(200001);

void dfs(int now,int prev=-1){
    if(now!=0)cout<<" ";
    cout<<now+1;
    for(auto &v:G[now]){
        if(v!=prev){
            dfs(v,now);
            cout<<" "<<now+1;
        }
    }
}


int main(void){
    cin>>n;
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for(int i=0;i<n;i++)sort(G[i].begin(),G[i].end());
    dfs(0);
    cout<<endl;
}
