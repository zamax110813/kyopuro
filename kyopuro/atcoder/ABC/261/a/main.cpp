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
    int l1,l2,r1,r2;
    cin>>l1>>r1>>l2>>r2;
    int ans=0;
    vector<int> v1(200,0),v2(200,0);
    for(int i=l1;i<=r1;i++){
        v1[i]=1;
    }
    for(int i=l2;i<=r2;i++){
        v2[i]=1;
    }
    for(int i=0;i<101;i++){
        if(v1[i]&&v2[i])ans++;
    }
    if(ans==0)cout<<ans<<endl;
    else cout<<ans-1<<endl;
}
