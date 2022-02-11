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
    int N;
    cin>>N;
    vector<string> S(N);
    map<char,ll> map;
    ll M=0,A=0,R=0,C=0,H=0;
    REP(i,N){
        cin>>S[i];
        if(S[i][0]=='M')M++;
        else if(S[i][0]=='A')A++;
        else if(S[i][0]=='R')R++;
        else if(S[i][0]=='C')C++;
        else if(S[i][0]=='H')H++;
    }
    ll ans=M*A*(R+C+H)+M*R*(C+H)+M*C*H+A*R*(C+H)+A*C*H+R*C*H;
    cout<<ans<<endl;
}
