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

#define MAX_N 100
#define MAX_M 100
int n,m;
char maize[MAX_N][MAX_M];
vector<int> dx={0,-1,-1,-1,0,1,1,1},dy={1,1,0,-1,-1,-1,0,1};

void dfs(int x,int y){
    maize[x][y]='.';
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            int nx=x+dx[i],ny=y+dy[j];
            if(0<=nx&&nx<n&&0<=ny&&ny<m&&maize[nx][ny]=='W')dfs(nx,ny);
        }
    }
}

int main(void){
    cin>>n>>m;
    int ans=0;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>maize[i][j];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(maize[i][j]=='W'){
                dfs(i,j);
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}