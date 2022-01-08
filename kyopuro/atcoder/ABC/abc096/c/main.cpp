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
    vector<vector<char>> grid(h,vector<char>(w));
    REP(i,h)REP(j,w)cin>>grid[i][j];
    vector<int> dx={-1,0,1},dy={-1,0,1};
    REP(y,h){
        REP(x,w){
            if(grid[y][x]=='.')continue;
            bool flag=false;
            REP(i,3){
                REP(j,3){
                    if(abs(dx[i])==1&&abs(dy[j])==1)continue;
                    if(dx[i]==0&&dy[j]==0)continue;
                    int xx=x+dx[i],yy=y+dy[j];
                    if(xx>=0&&xx<w&&yy<h&&yy>=0){
                        if(grid[yy][xx]=='#')flag=true;
                    }
                }
            }
            if(!flag){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    cout<<"Yes"<<endl;

}
