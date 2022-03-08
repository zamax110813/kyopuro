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

int ans=0;
int n,m,q;
vector<int> A(10);
vector<int> a(50),b(50),c(50),d(50);

void dfs(int cu=0,int lst=1){
    if(cu==n){
        int tmp=0;
        REP(i,q)if(A[b[i]]-A[a[i]]==c[i])tmp+=d[i];
        chmax(ans,tmp);
        return;
    }
    for(int i=lst;i<=m;i++){
        A[cu]=i;
        dfs(cu+1,i);
    }
}

int main(void){
    cin>>n>>m>>q;
    REP(i,q){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
        a[i]--;b[i]--;
    }
    dfs();
    cout << ans << endl;
}
