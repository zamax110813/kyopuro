#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i]==t[j])dp[i+1][j+1]=dp[i][j]+1;
            else dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
        }
    }
    cout<<dp[n][m]<<endl;
}