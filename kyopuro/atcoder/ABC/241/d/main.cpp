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
   multiset<ll> set;
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
           auto iter=set.upper_bound(x);
           while(k){
               if(iter==set.begin())break;
               iter--;
               k--;
           }
           if(k==0)cout<<*iter<<endl;
           else cout<<-1<<endl;
       }else if(type==3){
           ll x,k;
           cin>>x>>k;
           auto iter=set.lower_bound(x);
           for(int j=0;j<k-1;j++){
               if(iter==set.end())break;
               iter++;
           }
           if(iter==set.end())cout<<-1<<endl;
           else cout<<*iter<<endl;
       }
   }
   return 0;
}
