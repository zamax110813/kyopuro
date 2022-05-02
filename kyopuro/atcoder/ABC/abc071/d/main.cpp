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

const ll MOD=1000000007;

int main(void){
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    ll ans=1;
    int i=0;
    while(i<n){
        if(i==0){
            if(s1[i]==s2[i]){
                ans*=3;
                i++;
            }
            else{
                ans*=6;
                i+=2;
            }
        }else{
            if(s1[i]==s2[i]){
                if(s1[i-1]==s2[i-1])ans=(ans*2)%MOD;
                i++;
            }else{
                if(s1[i-1]==s2[i-1])ans=(ans*2)%MOD;
                else ans=(ans*3)%MOD;
                i+=2;
            }
        }
    }
    cout<<ans<<endl;
}
