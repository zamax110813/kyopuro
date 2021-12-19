#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
using mint=modint998244353;


int main(void){
    ll N;
    cin>>N;
    vector<ll> A(N+1);
    for(int i=1;i<=N;i++){
        cin>>A[i];
    }
    mint dp[N+1][10];
    memset(dp,0,sizeof(dp));
    dp[1][A[1]]=1;

    for(ll i=1;i<=N-1;i++){
        for(ll j=0;j<10;j++){
            dp[i+1][(j+A[i+1])%10]+=dp[i][j];
            dp[i+1][(j*A[i+1])%10]+=dp[i][j];
        }
    }
    for(int i=0;i<10;i++){
        cout<<dp[N][i].val()<<endl;
    }
    return 0;
}


