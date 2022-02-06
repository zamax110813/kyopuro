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

using mint=modint998244353;

int main(void){
    ll n;
    cin>>n;
    mint ans=0;
    ll digit=10;
    while(1){
        if(n<digit){
            if(digit==10){
                ans+=(n*(n+1))/2;
                break;
            }else{
                ans+=(((n-digit/10+1)%998244353)*((n-digit/10+2)%998244353))/2;
                break;
            }
        }else{
            if(digit==10){
                ans+=45;
            }else{
                ans+=((digit-(digit/10))%998244353)*((digit-(digit/10)+1)%998244353)/2;
            }
            digit*=10;
        }
    }
    cout<<ans.val()<<endl;
}
