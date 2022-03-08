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
    vector<vector<int>> a(H,vector<int>(W,0));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>a[i][j];
        }
    }
    vector<pair<pair<int,int>,pair<int,int>>> ans;
    REP(i,H){
        REP(j,W-1){
            if(a[i][j]%2==1){
                int hnow=i,wnow=j+1;
                a[i][j]--;
                a[hnow][wnow]++;
                pair<int,int> from={i+1,j+1},to={hnow+1,wnow+1};
                ans.push_back(make_pair(from,to));
            }
        }
    }
    REP(i,H-1){
        if(a[i][W-1]%2==1){
            a[i][W-1]--;
            a[i+1][W-1]++;
            pair<int,int> from={i+1,W},to={i+2,W};
            ans.push_back(make_pair(from,to));
        }
    }
    cout<<ans.size()<<endl;
    REP(i,ans.size()){
        cout<<ans[i].F.F<<" "<<ans[i].F.S<<" "<<ans[i].S.F<<" "<<ans[i].S.S<<endl;
    }
}
