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

//周期性を用いた解法
// int main(void){
//     ll n,x,m;
//     cin>>n>>x>>m;
//     vector<int> ord(m,-1);
//     vector<ll> rireki,syu;
//     ll ans=0;
//     for(int i=0;i<n;i++){
//        if(ord[x]!=-1){
//             int p=ord[x];
//             for(ll j=p;j<i;j++)syu.push_back(rireki[j]);
//             break;
//        }
//        ord[x]=i;
//        rireki.push_back(x);
//        ans+=x;
//        x=(x*x)%m;
//     }
//     n-=rireki.size();
//     if(n==0){
//         cout<<ans<<endl;
//         return 0;
//     }
//     vector<ll> sum(syu.size()+1,0);
//     for(ll i=0;i<syu.size();i++)sum[i+1]=sum[i]+syu[i];
//     ll q=n/syu.size();
//     ll r=n%syu.size();
//     ans+=q*sum[syu.size()]+sum[r];
//     cout<<ans<<endl;
// }

//ダブリングを用いた解法
int main(void){
    ll N,X,M;
    cin>>N>>X>>M;
    vector<vector<int>> nex(50,vector<int>(M));
    vector<vector<ll>> sum(50,vector<ll>(M,0));
    for(ll i=0;i<M;i++){
        nex[0][i]=(i*i)%M;
        sum[0][i]=i;
    }
    for(int i=0;i<49;i++){
        for(int j=0;j<M;j++){
            nex[i+1][j]=nex[i][nex[i][j]];
            sum[i+1][j]=sum[i][j]+sum[i][nex[i][j]];
        }
    }
    ll ans=0;
    int cur=X;
    for(int i=0;i<40;i++){
        if(N&(1LL<<i)){
            ans+=sum[i][cur];
            cur=nex[i][cur];
        }
    }
    cout<<ans<<endl;
}
