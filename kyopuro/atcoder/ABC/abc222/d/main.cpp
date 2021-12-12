#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    int N;
    cin>>N;
    vector<ll> a(N),b(N);
    for(ll i=0;i<N;i++)cin>>a[i];
    for(ll i=0;i<N;i++)cin>>b[i];
    vector<vector<ll>> dp(3010,vector<ll>(3010,0));
    dp[0][0]=1;
    vector<ll> cumsum(3010);
    for(ll i=0;i<N;i++){
        cumsum[0]=dp[i][0];
        for(ll j=1;j<3001;j++)cumsum[j]=cumsum[j-1]+dp[i][j];
        for(ll j=a[i];j<=b[i];j++)dp[i+1][j]+=cumsum[j];
    }
    ll ans=0;
    for(ll i=0;i<3001;i++)ans+=dp[N][i];
    cout<<ans%998244353<<endl;
}
