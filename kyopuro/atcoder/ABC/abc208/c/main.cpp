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

int main(void){
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    REP(i,n)cin>>a[i];
    vector<ll> b(n);
    REP(i,n){
        b[i]=i;
    }
    sort(b.begin(),b.end(),[&](ll l,ll r){
        return a[l]<a[r];
    });
    vector<ll> ans(n,k/n);
    REP(i,k%n){
        ans[b[i]]++;
    }
    REP(i,n){
        cout<<ans[i]<<endl;
    }
}
