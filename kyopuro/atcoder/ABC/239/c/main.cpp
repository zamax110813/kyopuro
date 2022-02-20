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
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    ll xdiff=x1-x2;
    ll ydiff=y1-y2;
    if(xdiff*xdiff+ydiff*ydiff>20){
        cout<<"No"<<endl;
        return 0;
    }
    bool exist=false;
    ll xlow,xhigh,ylow,yhigh;
    if(x1>x2){
        xlow=x2;
        xhigh=x1;
    }else{
        xlow=x1;
        xhigh=x2;
    }
    if(y1>y2){
        ylow=y2;
        yhigh=y1;
    }else{
        ylow=y1;
        yhigh=y2;
    }
    for(int i=xlow-sqrt(5);i<xhigh+sqrt(5);i++){
        for(int j=ylow-sqrt(5);j<yhigh+sqrt(5);j++){
            ll dist1,dist2;
            dist1=(i-x1)*(i-x1)+(j-y1)*(j-y1);
            dist2=(i-x2)*(i-x2)+(j-y2)*(j-y2);
            if(dist1==5&&dist2==5)exist=true;
        }
    }
    if(exist)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}