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
    ll n,m,t;
    cin>>n>>m>>t;
    vector<ll> A(n-1);
    REP(i,n-1)cin>>A[i];
    vector<ll> bonus(n,0);
    REP(i,m){
        ll x,y;
        cin>>x>>y;
        x--;
        bonus[x]=y;
    }
    for(int i=0;i<n-1;i++){
        if(bonus[i])t+=bonus[i];
        ll cost=A[i];
        if(t-cost<=0){
            cout<<"No"<<endl;
            return 0;
        }else{
            t-=cost;
        }
    }
    cout<<"Yes"<<endl;

}
