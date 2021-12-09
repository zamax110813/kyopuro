#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,W;
vector<int> v(100),w(100);
int dp[101][10001];

int rec(int i,int j){
    if(dp[i][j]>=0){
        return dp[i][j];
    }
    int res;
    if(i==n){
        res=0;
    }else if(j<w[i]){
        res=rec(i+1,j);
    }else{
        res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
    }
    return dp[i][j]=res;
}

int main(void){
    cin>>n>>W;
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<rec(0,W)<<endl;
}