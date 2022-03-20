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
    int H,W,N,M;
    cin>>H>>W>>N>>M;
    vector<pair<int,int>> light(N),block(M);
    vector<vector<int>> grid(H,vector<int>(W,0));
    REP(i,N){
        int x,y;
        cin>>x>>y;
        x--;y--;
        light[i].F=x;light[i].S=y;
        grid[x][y]=1;
    }
    REP(i,M){
        int x,y;
        cin>>x>>y;
        x--;y--;
        block[i].F=x;block[i].S=y;
        grid[x][y]=2;
    }
    vector<int> dH={0,1,0,-1},dW={1,0,-1,0};
    vector<vector<bool>> bright(H,vector<bool>(W,false));
    int ans=0;
    REP(j,N){
        auto [x,y]=light[j];
        for(int i=0;i<4;i++){
            int h=x+dH[i],w=y+dW[i];
            while(0<=h&&h<H&&0<=w&&w<W&&!grid[h][w]){
                if(!bright[h][w]){
                    ans++;
                    bright[h][w]=true;
                }
                h+=dH[i],w+=dW[i];
            }
        }
    }
    cout<<ans+N<<endl;

}

