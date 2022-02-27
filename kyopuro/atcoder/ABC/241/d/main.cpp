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
   int q;
   cin>>q;
   multiset<int> set;
   REP(i,q){
       int type;
       cin>>type;
       if(type==1){
           ll x;
           cin>>x;
           set.insert(x);
       }else if(type==2){
           ll x,k;
           cin>>x>>k;
           auto iter=upper_bound(ALL(set),x);
           for(int j=0;j<k;k++){
               if(iter==set.begin())
           }
       }
   }
}
