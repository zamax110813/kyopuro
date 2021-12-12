#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll dp[32][2][2];

ll solve(const string &s){
    const int L=s.size();
    fill((ll *)dp,(ll *)dp+sizeof(dp)/sizeof(ll),0);
    dp[0][0][0]=1;
    for(int i=0;i<L;i++){
        const int D=s[i]-'0';
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                for(int d=0;d<=(j?9:D);d++){
                    dp[i+1][j||(d<D)][k||d==4||d==9]+=dp[i][j][k];
                }
            }
        }
    }
    return dp[L][0][1]+dp[L][1][1];
}




int main(void){
    long long a,b;
    cin>>a>>b;
    cout<<solve(to_string(b))-solve(to_string(a-1))<<endl;
    return 0;
}


