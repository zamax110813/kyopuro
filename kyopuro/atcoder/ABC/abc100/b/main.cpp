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
    int d,n;
    cin>>d>>n;
    int ans=0;
    if(d==0){
        if(n==100){
            ans=n+1;
        }else{
            ans=n;
        }
        cout<<ans<<endl;
        return 0;
    }else if(d==1){
        if(n==100){
            ans=100+n*100;
        }else{
            ans=100+(n-1)*100;
        }
        cout << ans << endl;
        return 0;
    }else{
        if(n==100){
            ans=10000+n*10000;
        }else{
            ans=10000+(n-1)*10000;
        }
        cout << ans << endl;
        return 0;
    }
}
