#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct UnionFind{
    vector<int> par,siz;
    UnionFind(int n):par(n,-1),siz(n,1){}
    int root(int x){
        if(par[x]==-1)return x;
        else return par[x]=root(par[x]);
    }
    bool issame(int x,int y){
        return root(x)==root(y);
    }
    bool unite(int x,int y){
        x=root(x),y=root(y);
        if(x==y)return false;
        if(siz[x]<siz[y])swap(x,y);
        par[y]=x;
        siz[x]+=siz[y];
        return true;
    }
    int size(int x){
        return siz[root(x)];
    }
};

int main(void){
    string S;
    ll K;
    cin>>S>>K;
    ll N=S.size();
    vector<ll> sum(N+1);
    for(int i=0;i<N;i++){
        if(S[i]=='.')sum[i+1]=sum[i]+1;
        else sum[i+1]=sum[i];
    }

    ll ans=0;
    ll right=0;
    for(ll left=0;left<N;left++){
        while(right+1<=N&&sum[right+1]-sum[left]<=K){
            right++;
        }
        ans=max(ans,right-left);
    }
    cout<<ans<<endl;
    return 0;
}
