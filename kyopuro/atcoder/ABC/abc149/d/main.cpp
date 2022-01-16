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
    int n,k,r,s,p;
    string t;
    cin>>n>>k>>r>>s>>p>>t;
    auto score=[&](int i){
            if(t[i]=='r')return p;
            else if(t[i]=='s')return r;
            else return s;
    };
    ll ans=0;
    for(int i=0;i<k;i++){
            bool last=false;
            for(int j=i;j<n;j+=k){
                    if(t[j-k]==t[j]&&last&&j>=k)last=false;
                    else{
                            last=true;
                            ans+=score(j);
                    }
            }
    }
    cout << ans << endl;

}
