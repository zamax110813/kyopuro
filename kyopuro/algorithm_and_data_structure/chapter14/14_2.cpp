#include<bits/stdc++.h>
using namespace std;

const long long INF=1LL<<60;

struct Edge{
    int to;
    long long w;
    Edge(int to,long long w):to(to),w(w){}
};

using Graph=vector<vector<Edge>>;

template<class T> bool chmin(T& a,T b){
    if(a>b){
        a=b;
        return true;
    }else return false;
}

int main(void){
    int N,M,s;
    cin>>N>>M>>s;
    Graph G(N);
    for(int i=0;i<M;i++){
        int a,b,w;
        cin>>a>>b>>w;
        a--;
        b--;

    }
}