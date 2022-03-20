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
    vector<ll> a(n);
    REP(i,n)cin>>a[i];
    sort(ALL(a),greater<ll>());
    if(n%2==0){
        ll ans=0;
        for(int i=0;i<n/2-1;i++){
            ans+=a[i]*2;
        }
        ans+=a[n/2-1];
        ans-=a[n/2];
        for(int i=n/2+1;i<n;i++){
            ans-=a[i]*2;
        }
        cout<<ans<<endl;
    }else{
        ll ans1=0;
        for(int i=0;i<n/2-1;i++){
            ans1+=2*a[i];
        }
        ans1+=(a[n/2-1]+a[n/2]);
        for(int i=n/2+1;i<n;i++){
            ans1-=2*a[i];
        }
        ll ans2=0;
        for(int i=0;i<n/2;i++){
            ans2+=2*a[i];
        }
        ans2-=(a[n/2]+a[n/2+1]);
        for(int i=n/2+2;i<n;i++){
            ans2-=2*a[i];
        }
        cout<<max(ans1,ans2)<<endl;
    }
}
