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

ll gcd(ll a,ll b){
        if(b==0)return a;
        else return gcd(b,a%b);
}

ll lcm(ll a,ll b){
        ll g=gcd(a,b);
        return a/g*b;
}

int main(void){
        int n;
        cin>>n;
        vector<ll> t(n);
        REP(i,n)cin>>t[i];
        ll ans=1;
        REP(i,n){
                ans=lcm(ans,t[i]);
        }
        cout<<ans<<endl;
}

