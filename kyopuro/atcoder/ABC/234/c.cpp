#include<bits/stdc++.h>
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
    ll k;
    cin>>k;
    ll digit=1;
    ll l=1;
    ll r=2;
    while(1){
        if(l<=k&&k<r){
            break;
        }
        l*=2;
        r*=2;
        digit++;
    }
    ll tmp=k-pow(2,digit-1);
    ll ans=2;
    for(int i=0;i<digit-1;i++){
        ans*=10;
    }
    for(int i=0;i<digit-1;i++){
        if(tmp&(1<<i)){
            ans+=pow(10,i);
        }
    }
    cout << ans << endl;

}
