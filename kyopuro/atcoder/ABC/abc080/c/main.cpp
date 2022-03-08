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

const long long INF=1LL<<60;

int main(void){
    int n;
    cin>>n;
    vector<vector<int>> F(n,vector<int>(10,0));
    REP(i,n){
        REP(j,10){
            cin>>F[i][j];
        }
    }
    vector<vector<ll>> P(n,vector<ll>(11,0));
    REP(i,n){
        REP(j,11){
            cin>>P[i][j];
        }
    } 
    ll ans=-INF;
    FOR(msk,1,(1<<10)-1){
        ll sum=0;
        REP(i,n){
            int c=0;
            REP(j,10)if(msk&(1<<j))if(F[i][j])c++;
            sum+=P[i][c];
        }
        chmax(ans,sum);
    }
    cout << ans << endl;
}
