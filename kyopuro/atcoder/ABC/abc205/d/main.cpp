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
   int n,q;
   cin>>n>>q;
   vector<ll> a(n);
   REP(i,n)cin>>a[i];
   vector<ll> c(n);
   REP(i,n)c[i]=a[i]-(i+1);
   while(q--){
           ll k;
           cin>>k;
           const int idx=lower_bound(ALL(c),k)-c.begin();
           if(idx==n)cout<<a[n-1]+(k-c[n-1])<<endl;
           else cout<<(a[idx]-1)-(c[idx]-k)<<endl;
   }
}

