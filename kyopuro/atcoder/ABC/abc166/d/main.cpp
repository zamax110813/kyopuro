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
        ll x;
        cin>>x;
        map<ll,ll> map;
        FOR(i,-1000,1000){
                map[ll(i*i*i*i*i)]=i;
        }
        for(auto v:map){
                ll b=v.second;
                ll b5=v.first;
                if(map.count(x+b5)){
                        ll a=map[x+b5];
                        cout<<a<<" "<<b<<endl;
                        return 0;
                }
        }

}

