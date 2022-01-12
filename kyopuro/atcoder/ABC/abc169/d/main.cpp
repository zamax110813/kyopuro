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

vector<pair<ll,ll>> prime_factorize(ll n){
        vector<pair<ll,ll>> res;
        for(ll i=2;i*i<=n;i++){
                if(n%i!=0)continue;
                int num=0;
                while(n%i==0){
                        num++;
                        n/=i;
                }
                res.push_back(make_pair(i,num));
        }
        if(n!=1)res.push_back(make_pair(n,1));
        return res;
}

int main(void){
        ll n;
        cin>>n;
        auto pf=prime_factorize(n);
        ll ans=0;
        for(auto i:pf){
                ll e=i.second;
                ll tmp=0;
                ll cur=1;
                while(e>=cur){
                        e-=cur;
                        cur++;
                        tmp++;
                }
                ans+=tmp;
        }
        cout << ans << endl;
}

