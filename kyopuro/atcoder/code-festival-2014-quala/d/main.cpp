#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(void){
    int K;
    string A;
    cin>>A>>K;
    const int n=A.size();
    ll dp[16][1LL<<10][3];
    memset(dp,-1,sizeof(dp));
    dp[0][0][0]=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<1LL<<10;j++){
            for(int k=0;k<3;k++){
                if(dp[i][j][k]==-1)continue;
                for(int d=0;d<10;d++){
                    int tmp=j;
                    
                }
                
            }
        }
    }
}


