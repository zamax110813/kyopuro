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
    int n;
    cin>>n;
    vector<vector<int>> idx(n+1);
    REP(i,n){
        int a;
        cin>>a;
        idx[a].push_back(i);
    }
    int q;
    cin>>q;
    REP(i,q){
        int l,r,x;
        cin>>l>>r>>x;
        l--;r--;
        cout<<upper_bound(idx[x].begin(),idx[x].end(),r)-lower_bound(idx[x].begin(),idx[x].end(),l)<<endl;
    }
}
