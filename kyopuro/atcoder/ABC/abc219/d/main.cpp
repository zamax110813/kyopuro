#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long INF=1LL<<60;

int main(void){
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    ll dp[310][310][310];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<301;j++){
            for(int k=0;k<301;k++){
                dp[i][j][k]=INF;
            }
        }
    }
    dp[0][0][0]=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<x+1;j++){
            for(int k=0;k<y+1;k++){
                if(dp[i][j][k]<INF){
                    dp[i+1][min(j+a[i],x)][min(k+b[i],y)]=min(dp[i+1][min(j+a[i],x)][min(k+b[i],y)],dp[i][j][k]+1);
                    dp[i+1][j][k]=min(dp[i+1][j][k],dp[i][j][k]);
                }
            }
        }
    }
    if(dp[n][x][y]==INF){
        cout<<-1<<endl;
        return 0;
    }else{
        cout<<dp[n][x][y]<<endl;
    }
}
