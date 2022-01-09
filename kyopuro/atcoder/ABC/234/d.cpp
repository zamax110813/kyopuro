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

int main(void){
    int n,k;
    cin>>n>>k;
    vector<int> p(n);
    REP(i,n){
        cin>>p[i];
    }
    priority_queue<int> que;
    vector<int> ans;
    REP(i,k){
        que.push(p[i]);
    }
    ans.push_back(aue.top());
    FOR(i,k,n-1){
        if(p[i]>que.top){
            que.pop();
            que.push(p[i]);
        }
        ans.push_back(que.top());
    }
    REP(i,n-k+1)cout<<ans[i]<<endl;
}
