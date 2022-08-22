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

int main(void){
    int H,W;
    cin>>H>>W;
    vector<string> G(H);
    REP(i,H)cin>>G[i];
    int nowx=0,nowy=0;
    vector<vector<int>> visited(H,vector<int>(W,0));
    visited[0][0]=1;
    while(1){
        if(G[nowy][nowx]=='U'&&nowy!=0){
            nowy--;
        }else if(G[nowy][nowx]=='D'&&nowy!=H-1){
            nowy++;
        }else if(G[nowy][nowx]=='L'&&nowx!=0){
            nowx--;
        }else if(G[nowy][nowx]=='R'&&nowx!=W-1){
            nowx++;
        }else{
            cout<<nowy+1<<" "<<nowx+1<<endl;
            return 0;
        }
        if(visited[nowy][nowx]){
            cout<<-1<<endl;
            return 0;
        }else{
            visited[nowy][nowx]=1;
        }
    }
}
