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
    int H,W;
    cin>>H>>W;
    vector<string> masu(H);
    REP(i,H)cin>>masu[i];
    vector<vector<int>> yoko(H),tate(W);
    REP(i,H)yoko[i].push_back(-1);
    REP(i,W)tate[i].push_back(-1);
    REP(i,H){
        REP(j,W){
            if(masu[i][j]=='#'){
                yoko[i].push_back(j);
                tate[j].push_back(i);
            }
        }
    }
    REP(i,H)yoko[i].push_back(W);
    REP(i,W)tate[i].push_back(H);
    int ans=0;
    REP(i,H){
        REP(j,W){
            if(masu[i][j]=='.'){
                int yoko_idx=lower_bound(ALL(yoko[i]),j)-yoko[i].begin();
                int L=j-yoko[i][yoko_idx-1]-1;
                int R=yoko[i][yoko_idx]-j-1;
                int tate_idx=lower_bound(ALL(tate[j]),i)-tate[j].begin();
                int U=i-tate[j][tate_idx-1]-1;
                int D=tate[j][tate_idx]-i-1;
                chmax(ans,L+R+U+D+1);
            }
        }
    }
    cout<<ans<<endl;

}
