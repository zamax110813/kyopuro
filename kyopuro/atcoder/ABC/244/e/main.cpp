#include<bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<(ll)n;i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)b;i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)b;i--)
#define FORA(i,I) for(const auto& i:I)
#define ALL(x) x.begin(),x.end()
#define SIZE(x) ll(x.size())
#define F first
#define S second

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; } 

using Graph=vector<vector<int>>;

int dp[2010][2010][2];

int main(void){
    int N,M,K,S,T,X;
    cin>>N>>M>>K>>S>>T>>X;
    S--;T--;X--;
    Graph G(N);
    REP(i,M){
        int a,b;
        cin>>a>>b;
        a--;b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<2;j++){
            if(S==i)dp[0][i][j]=1;
            else dp[0][i][j]=0;
        }
    }
    REP(i,N)dp[0][i][1]=0;
    for(int i=0;i<K;i++){
        for(int j=0;j<N;j++){
            for(int k=0;k<2;k++){
                if(j!=X){
                    for(auto x:G[j])dp[i+1][j][k]=(dp[i+1][j][k]+dp[i][x][k])%998244353;
                }else{
                    for(auto x:G[j])dp[i+1][j][k]=(dp[i+1][j][k]+dp[i][x][1-k])%998244353;
                }
            }
        }
    }
    cout<<dp[K][T][0]<<endl;
}
