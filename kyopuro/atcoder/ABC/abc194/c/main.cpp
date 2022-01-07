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

// int main(void){
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     REP(i,n)cin>>a[i];
//     ll sum=0,sum2=0;
//     REP(i,n){
//         sum+=a[i];
//         sum2+=a[i]*a[i];
//     }
//     ll ans=n*sum2-sum*sum;
//     cout << ans << endl;
// }

//別解
int main(void){
    ll n;
    cin>>n;
    vector<ll> a(n);
    REP(i,n)cin>>a[i];
    vector<ll> cnt(401,0);
    REP(i,n){
        cnt[a[i]+200]++;
    }
    ll ans=0;
    REP(i,401){
        REP(j,401){
            ans+=cnt[i]*cnt[j]*abs((i-200)-(j-200))*abs((i-200)-(j-200));
        }
    }
    cout << ans/2 << endl;
}
