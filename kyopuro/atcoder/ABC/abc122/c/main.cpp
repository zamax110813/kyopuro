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
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<int> ac(n-1,0);
    REP(i,n-1){
        if(s[i]=='A'&&s[i+1]=='C'){
            ac[i]=1;
        }
    }
    vector<int> sum(n+1,0);
    sum[0]=0;
    REP(i,n){
        sum[i+1]=sum[i]+ac[i];
        if(i==n-1)sum[i+1]=sum[i];
    }
    REP(i,q){
        int l,r;
        cin>>l>>r;
        int ans=sum[r-1]-sum[l-1];
        cout<<ans<<endl;
    }

 }

