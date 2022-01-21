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
   ll n,m;
   ll modnum=1000000000+7;
   cin>>n>>m;
    if(abs(n-m)>=2){
            cout<<0<<endl;
            return 0;
    }
    FORD(i,n-1,1){
            n*=i;
            n%=modnum;
    }
    FORD(i,m-1,1){
            m*=i;
            m%=modnum;
    }
    int ans;
    if(n==m){
            ans=(2*n*m)%modnum;
            cout<<ans<<endl;
            return 0;
    }else{
            ans=(n*m)%modnum;
            cout<<ans<<endl;
            return 0;
    }
}

