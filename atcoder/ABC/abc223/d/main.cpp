#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    int N,M;
    cin>>N>>M;
    vector<int> indegree(N);
    vector<vector<int>> out(N);
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        a-=1;
        b-=1;
        indegree[b]++;
        out[a].push_back(b);
    }
    priority_queue<int,vector<int>,greater<int>> heap;
    for(int i=0;i<N;i++){
        if(indegree[i]==0)heap.push(i);
    }
    vector<int> ans;
    while(!heap.empty()){
        int i=heap.top();
        heap.pop();
        ans.push_back(i+1);
        for(int v:out[i]){
            indegree[v]--;
            if(indegree[v]==0)heap.push(v);
        }
    }
    if(ans.size()!=N)cout<<"-1"<<endl;
    else{
        for(int i=0;i<N;i++){
            cout<<ans[i];
            if(i==N-1)cout<<endl;
            else cout<<" ";
        }
    }
}
