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
    int n;
    cin>>n;
    vector<double> l(n),r(n);
    vector<int> t(n);
    REP(i,n){
        cin>>t[i]>>l[i]>>r[i];
        if(t[i]==2||t[i]==4){
            r[i]-=0.5;
        }
        if(t[i]==3||t[i]==4){
            l[i]+=0.5;
        }
    }
    int ans=0;
    REP(i,n){
        FOR(j,i+1,n){
            if(max(l[i],l[j])<=min(r[i],r[j])){
                ans++;
            }
        }
    }
    cout << ans << endl;
    
}
