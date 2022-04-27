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



vector<int> rec(int n){
    vector<int> ans;
    if(n==1){
        ans.push_back(n);
        return ans;
    }
    for(int i:rec(n-1))ans.push_back(i);
    ans.push_back(n);
    for(int i:rec(n-1))ans.push_back(i);
    return ans;
};

int main(void){
    int n;
    cin>>n;
    vector<int> ans=rec(n);
    for(int i=0;i<ans.size()-1;i++)cout<<ans[i]<<" ";
    cout<<ans[ans.size()-1]<<endl;
}
