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

const int MAX=210000;

int main(void){
    ll n,w;
    cin>>n>>w;
    auto solve=[&](){
            vector<ll> num(MAX+1,0);
            REP(i,n){
                    ll s,t,p;
                    cin>>s>>t>>p;
                    num[s]+=p,num[t]-=p;
            }
            REP(j,MAX){
                    num[j+1]+=num[j];
                    if(num[j]>w)return false;
            }
            return true;
    };
    cout<<(solve()?"Yes":"No")<<endl;

}

