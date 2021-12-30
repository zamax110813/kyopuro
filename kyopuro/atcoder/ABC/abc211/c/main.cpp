#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
using mint=modint1000000007;


int main(void){
    string s,t="chokudai";
    cin>>s;
    mint dp[100010][10];
    for(int i=0;i<s.size()+1;i++){
        dp[i][0]=1;
    }
    for(int i=1;i<9;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<s.size()+1;i++){
        for(int j=1;j<9;j++){
            if(s[i-1]!=t[j-1]){
                dp[i][j]=dp[i-1][j];
            }else{
                dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
            }
        }
    }
    cout<<dp[s.size()][8].val()<<endl;

}
