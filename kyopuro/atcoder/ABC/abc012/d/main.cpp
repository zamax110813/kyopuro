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

const ll INF=1LL<<60;

//dijkstraによる解法
// struct Edge{
//     int to;
//     ll w;
//     Edge(int to,ll w):to(to),w(w){}
// };

// using Graph=vector<vector<Edge>>;

// int main(void){
//     int n,m;
//     cin>>n>>m;
//     Graph G(n);
//     REP(i,m){
//         ll a,b,w;
//         cin>>a>>b>>w;
//         a--;b--;
//         G[a].push_back(Edge(b,w));
//         G[b].push_back(Edge(a,w));
//     }
//     ll min=INF;
//     vector<bool> used(n);
//     vector<ll> dist(n);
//     REP(i,n){
//         used.assign(n,false);
//         dist.assign(n,INF);
//         dist[i]=0;
//         REP(j,n){
//             ll min_dist=INF;
//             int min_v=-1;
//             REP(k,n){
//                 if(!used[k]&&dist[k]<min_dist){
//                     min_dist=dist[k];
//                     min_v=k;
//                 }
//             }
//             if(min_v==-1)break;
//             for(auto nv:G[min_v]){
//                 chmin(dist[nv.to],dist[min_v]+nv.w);
//             }
//             used[min_v]=true;
//         }
//         ll max=-1;
//         REP(j,n){
//             if(dist[j]>max){
//                 max=dist[j];
//             }
//         }
//         if(max<min){
//             min=max;
//         }
//     }
//     cout<<min<<endl;
// }

//ワーシャルフロイド法の解法
int main(void){
    int n,m;
    cin>>n>>m;
    vector<vector<ll>> dp(n,vector<ll>(n,INF));
    REP(i,m){
        int a,b;
        ll w;
        cin>>a>>b>>w;
        a--;b--;
        dp[a][b]=w;
        dp[b][a]=w;
    }
    REP(i,n)dp[i][i]=0;
    REP(k,n){
        REP(i,n){
            REP(j,n){
                chmin(dp[i][j],dp[i][k]+dp[k][j]);
            }
        }
    }
    ll ans=INF;
    REP(i,n){
        ll tmp=-1;
        REP(j,n){
            if(i==j)continue;
            chmax(tmp,dp[i][j]);
        }
        chmin(ans,tmp);
    }
    cout<<ans<<endl;
}