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

const int MAX=200000;

int main(void){
    int n;
    cin>>n;
    vector<int> cnt(MAX+1,0);
    REP(i,n){
        int a;
        cin>>a;
        cnt[a]++;
    }
    ll ans=0;
    for(int q=1;q<=MAX;q++){
        for(int r=1;r<=(MAX/q);r++){
            ans+=(ll)cnt[q]*cnt[r]*cnt[q*r];
        }
    }
    cout<<ans<<endl;

}
