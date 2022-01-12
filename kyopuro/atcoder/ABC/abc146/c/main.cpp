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

ll digit(ll x){
        ll cnt=0;
        while(x>0){
                x/=10;
                cnt++;
        }
        return cnt;
}

int main(void){
        int a,b;
        ll x;
        cin>>a>>b>>x;
        ll left=0,right=1000000001;
        while(right-left>1){
                ll mid=(left+right)/2;
                if(a*mid+b*digit(mid)>x)right=mid;
                else left=mid;
        }
        cout<<left<<endl;
}

