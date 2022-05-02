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
    ll n,k,x;
    cin>>n>>k>>x;
    vector<int> a(n);
    REP(i,n)cin>>a[i];
    ll ans=0;
    REP(i,n)ans+=a[i];
    ll m=0;
    REP(i,n)m+=a[i]/x;
    m=min(m,k);
    ans-=m*x;
    k-=m;
    REP(i,n)a[i]%=x;
    sort(ALL(a));
    for(int i=n-1;i>=0;i--){
        if(k==0)break;
        ans-=a[i];
        k--;
    }
    cout<<ans<<endl;
}
