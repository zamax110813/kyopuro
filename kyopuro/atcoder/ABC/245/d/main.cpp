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
    int n,m;
    cin>>n>>m;
    vector<int> a(n+1),b(m+1),c(n+m+1);
    REP(i,n+1)cin>>a[i];
    REP(i,n+m+1)cin>>c[i];
    for(int i=m;i>=0;i--){
        b[i]=c[n+i]/a[n];
        for(int j=n;j>=0;j--)c[i+j]-=a[j]*b[i];
    }
    for(int i=0;i<m;i++)cout<<b[i]<<" ";
    cout<<b[m]<<endl;
}
