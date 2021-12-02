#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using Graph=vector<vector<ll>>;

int main(void){
    int N;
    cin>>N;
    Graph G(N);
    for(int i=0;i<N-1;i++){
        int a,b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for(int i=0;i<N;i++){
        if(G[i].size()==N-1){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}

