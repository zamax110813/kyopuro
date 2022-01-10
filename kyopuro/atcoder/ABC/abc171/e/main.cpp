#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long INF=1LL<<60;

#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=ll(b);i--)
#define FORA(i,I) for(const auto& i;I)

//x:コンテナ
#define ALL(x) x.begin(),x.end()
#define SIZE(x) ll(x.size())

int main(void){
    int n;
    cin>>n;
    vector<ll> a(n);
    ll b=0;
    REP(i,n){
        cin>>a[i];
        b^=a[i];
    }
    REP(i,n){
        if(i==n-1)cout<<(b^a[i])<<endl;
        else cout<<(b^a[i])<<" ";
    }

}


