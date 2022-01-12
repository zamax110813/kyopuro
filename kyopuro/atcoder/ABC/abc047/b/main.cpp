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
        int w,h,n;
        cin>>w>>h>>n;
        int y1=0,y2=h,x1=0,x2=w;
        REP(i,n){
                int x,y,a;
                cin>>x>>y>>a;
                if(a==1)chmax(x1,x);
                else if(a==2)chmin(x2,x);
                else if(a==3)chmax(y1,y);
                else if(a==4)chmin(y2,y);
        }
        if(x1>=x2||y1>=y2){
                cout<<0<<endl;
                return 0;
        }else{
                cout<<(x2-x1)*(y2-y1)<<endl;
        }
}

