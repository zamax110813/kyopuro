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

const int dx[4]={0,-1,0,1};
const int dy[4]={1,0,-1,0};

int main(void){
    int h,w,r,c;
    cin>>h>>w;
    cin>>r>>c;
    int ans=0;
    for(int i=0;i<4;i++){
        int nx=r+dx[i],ny=c+dy[i];
        if(nx>=1&&nx<=h&&ny>=1&&ny<=w)ans++;
    }
    cout<<ans<<endl;

}
