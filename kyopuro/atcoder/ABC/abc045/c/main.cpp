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
    string S;
    cin>>S;
    ll ans=0;
    for(int i=0;i<(1<<(S.size()-1));i++){
        int l=0,r=1;
        for(int j=0;j<S.size()-1;j++){
            if(i&(1<<j)){
                ans+=stoll(S.substr(l,r-l));
                l=r;
                r++;
            }else{
                r++;
            }
        }
        ans+=stoll(S.substr(l));
    }
    cout<<ans<<endl;
}
