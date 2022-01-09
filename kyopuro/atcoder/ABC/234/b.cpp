#include<bits/stdc++.h>
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
    vector<pair<double,double>> cord(n);
    REP(i,n){
        cin>>cord[i].F>>cord[i].S;
    }
    double ans=0;
    REP(i,n){
        REP(j,n){
            double dx=cord[i].F-cord[j].F;
            double dy=cord[i].S-cord[j].S;
            double temp=sqrt(dx*dx+dy*dy);
            ans=max(ans,temp);
        }
    }
    cout <<setprecision(7)<<ans<< endl;
}
