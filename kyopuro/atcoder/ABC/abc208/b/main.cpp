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

ll fact(ll x){
    if(x==1)return 1;
    else return x*fact(x-1);
}


int main(void){
    int p;
    cin>>p;
    int ans=0;
    vector<int> factorial(11);
    FOR(i,1,10){
        factorial[i]=fact(i);
    }
    FORD(i,10,1){
        while(p>=factorial[i]){
            p-=factorial[i];
            ans++;
        }
    }
    cout << ans << endl;
}
