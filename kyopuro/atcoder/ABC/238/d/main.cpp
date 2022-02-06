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
    int t;
    cin>>t;
    vector<bool> ans(t);
    REP(i,t){
        ll a,s;
        cin>>a>>s;
        if(s>=2*a){
            if((a&ll(s-2*a))==0){
                ans[i]=true;
            }else{
                ans[i]=false;
            }
        }else{
            ans[i]=false;
        }
    }
    REP(i,t){
        if(ans[i]){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}
