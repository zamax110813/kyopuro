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

ll func(ll a,ll b){
    return (a*a*a+a*a*b+a*b*b+b*b*b);
}

int main(void){
    ll n;
    cin>>n;
    ll ans=8*1e18;
    for(int a=0;a<=1000000;a++){
        ll r=1000000;
        ll l=-1;
        while(r-l>1){
            ll mid=(r+l)/2;
            if(func(a,mid)>=n){
                r=mid;
            }else{
                l=mid;
            }
        }
        ans=min(func(a,r),ans);
    }
    cout<<ans<<endl;
}
