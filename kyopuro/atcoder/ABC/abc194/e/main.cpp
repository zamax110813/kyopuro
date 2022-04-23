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
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    REP(i,n)cin>>a[i];
    vector<vector<int>> pos(n+1);
    REP(i,m+1)pos[i].push_back(0);
    REP(i,n)pos[a[i]].push_back(i+1);
    REP(i,m+1)pos[i].push_back(n+1);
    REP(i,m+1){
        for(int j=0;j<pos[i].size()-1;j++){
            if(pos[i][j+1]-pos[i][j]>m){
                cout<<i;
                return 0;
            }
        }
    }
}
