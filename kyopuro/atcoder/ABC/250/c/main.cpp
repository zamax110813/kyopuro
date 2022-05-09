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
    int n,q;
    cin>>n>>q;
    vector<int> ans;
    vector<int> idx(200010);
    REP(i,n+1)idx[i]=i-1;
    REP(i,n)ans.push_back(i+1);
    REP(i,q){
        int x;
        cin>>x;
        if(idx[x]==n-1){
            int tmp=ans[idx[x]-1];
            swap(ans[idx[x]],ans[idx[x]-1]);
            swap(idx[x],idx[tmp]);
        }else{
            int tmp=ans[idx[x]+1];
            swap(ans[idx[x]],ans[idx[x]+1]);
            swap(idx[x],idx[tmp]);
        }
    }
    REP(i,n){
        if(i==n-1)cout<<ans[i]<<endl;
        else cout<<ans[i]<<" ";
    }
}
