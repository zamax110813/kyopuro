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
    ll n;
    cin>>n;
    set<ll> s;
    for(ll i=1;i*i<=2*n;i++){
            if((2*n)%i==0){
                    s.insert(i);
                    s.insert(floor((2*n)/i));
            }
    }
    ll ans=0;
    for(auto i:s){
            ll m=floor((2*n)/i);
            if((m-i)%2==1)ans++;
    }
    cout << ans*2 << endl;
}
