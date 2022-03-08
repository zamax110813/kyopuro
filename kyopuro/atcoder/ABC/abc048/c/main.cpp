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

const long long INF=1LL<<60;

int main(void){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    ll pre_total=0;
    REP(i,n){
        cin>>a[i];
        pre_total+=a[i];
    }
    REP(i,n){
        if(a[i]>x)a[i]=x;
    }
    REP(i,n-1){
        if(a[i]+a[i+1]>x){
            ll diff=a[i]+a[i+1]-x;
            a[i+1]-=diff;
        }
    }
    ll total=0;
    REP(i,n){
        total+=a[i];
    }
    cout<<pre_total-total<<endl;

}
