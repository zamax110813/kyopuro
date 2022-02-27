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

int main(void){
    int n,m;
    cin>>n>>m;
    vector<ll> h(n),w(m);
    for(int i=0;i<n;i++)cin>>h[i];
    for(int i=0;i<m;i++)cin>>w[i];
    vector<ll> L(n+1,0),R(n+1,0);
    sort(ALL(h));
    for(int i=2;i<n;i+=2){
        L[i]=L[i-2]+h[i-1]-h[i-2];
        R[i]=R[i-2]+h[n-i+1]-h[n-i];
    }
    ll ans=INF;
    for(int i=0;i<m;i++){
        int idx=lower_bound(ALL(h),w[i])-h.begin();
        if(idx%2==1){
            chmin(ans,L[idx-1]+R[n-idx]+w[i]-h[idx-1]);
        }else{
            chmin(ans,L[idx]+R[n-idx-1]+h[idx]-w[i]);
        }
    }
    cout<<ans<<endl;
}
