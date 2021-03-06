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
    int n;
    string s;
    cin>>n>>s;
    ll r=0,g=0,b=0;
    REP(i,n){
        if(s[i]=='R')++r;
        else if(s[i]=='G')++g;
        else ++b;
    }

    ll cnt=0;
    for(int i=0;i<n;++i)for(int j=i+1;j<n;++j){
        int k=2*j-i;
        if(k>=n)continue;
        if(s[i]!=s[j]&&s[j]!=s[k]&&s[k]!=s[i])cnt++;
    }
    ll ans=r*g*b-cnt;
    cout << ans << endl;
}
