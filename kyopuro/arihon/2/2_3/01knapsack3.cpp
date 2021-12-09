#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    int n,W;
    cin>>n>>W;
    vector<int> w(n),v(n);
    vector<vector<int>> dp(101,vector<int>(10001,0));
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=W;j++){
            if(j<w[i])dp[i][j]=dp[i+1][j];
            else dp[i][j]=max(dp[i+1][j],dp[i+1][j-w[i]]+v[i]);
        }
    }
    cout<<dp[0][W]<<endl;
}