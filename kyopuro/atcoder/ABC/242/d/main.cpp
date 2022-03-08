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
    int Q;
    cin>>S>>Q;
    auto g=[&](char s,ll add){
        return char('A'+(s-'A'+add)%3);
    };
    function<char(ll,ll)> f=[&](ll t,ll k){
        if(t==0)return S[k];
        if(k==0)return g(S[0],t);
        return g(f(t-1,k/2),k%2+1);
    };
    while(Q--){
        ll t,k;
        cin>>t>>k;
        cout<<f(t,k-1)<<endl;
    }
}
