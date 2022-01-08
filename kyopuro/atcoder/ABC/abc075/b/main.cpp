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
    int h,w;
    cin>>h>>w;
    vector<string> masu(h);
    REP(i,h)cin>>masu[i];
    REP(i,h){
        REP(j,w){
            int bomb=0;
            if(masu[i][j]=='.'){
                FOR(dx,-1,1){
                    FOR(dy,-1,1){
                        if(dx==0&&dy==0)continue;
                        if(j+dx>=0&&j+dx<w&&i+dy>=0&&i+dy<h){
                            if(masu[i+dy][j+dx]=='#')bomb++;
                        }
                    }
                }
                masu[i][j]=char('0'+bomb);
            }
        }
    }
    REP(i,h){
        cout<<masu[i]<<endl;
    }
}
