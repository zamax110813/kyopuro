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
    string s;
    cin>>s;
    int k;
    cin>>k;
    if(k>s.size()){
            cout<<0<<endl;
            return 0;
    }
    int ans=0;
    set<string> set;
    REP(i,s.size()-k+1){
            if(set.find(s.substr(i,k))==set.end()){
                    ans++;
                    set.insert(s.substr(i,k));
            }
    }
    cout << ans << endl;
}

