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
    pair<int,int> ta,tb;
    int T,V;
    cin>>ta.F>>ta.S>>tb.F>>tb.S>>T>>V;
    int n;
    cin>>n;
    vector<pair<int,int>> cord(n);
    REP(i,n){
        cin>>cord[i].F>>cord[i].S;
    }
    double time=T*V;
    bool cheat=false;
    REP(i,n){
        double dist=0;
        int xdiff=cord[i].F-ta.F,ydiff=cord[i].S-ta.S;
        dist+=sqrt(xdiff*xdiff+ydiff*ydiff);
        xdiff=tb.F-cord[i].F,ydiff=tb.S-cord[i].S;
        dist+=sqrt(xdiff*xdiff+ydiff*ydiff);
        if(dist<=time)cheat=true;
    }
    if(cheat)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}