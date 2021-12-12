#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD=1e9+7;
int D;
string N;
ll dp[10005][2][105];

int main(void){
    cin>>D>>N;
    int n=N.size();
    dp[0][0][0]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<D;j++){
            for(int k=0;k<10;k++){
                dp[i+1][1][(j+k)%D]+=dp[i][1][j];
                dp[i+1][1][(j+k)%D]%=MOD;
            }
            int ni=(N[i]-'0');

            for(int k=0;k<ni;k++){
                dp[i + 1][1][(j + k) % D] += dp[i][0][j];
                dp[i + 1][1][(j + k) % D] %= MOD;
            }

            dp[i + 1][0][(j + ni) % D] = dp[i][0][j];
        }
    }
    cout << dp[n][0][0] + dp[n][1][0] - 1 << endl;
    return 0;
}


