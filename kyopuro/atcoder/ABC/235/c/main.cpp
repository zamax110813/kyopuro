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
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    REP(i,n)cin>>a[i];
    map<int,vector<int>> map;
    REP(i,n){
            int val=i+1;
            map[a[i]].push_back(val);
    }
    vector<int> ans;
    REP(i,q){
            int x,k;
            cin>>x>>k;
            k--;
            auto itr = map.find(x);
            if(itr != map.end()){
                    if(itr->second.size()<k+1)ans.push_back(-1);
                    else ans.push_back(map[x][k]);
            }else{
                    ans.push_back(-1);
            }
    }
    REP(i,q){
            cout << ans[i] << endl;
    }

}
