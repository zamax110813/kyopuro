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
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    int k;
    cin>>k;
    vector<int> p(k);
    REP(i,k)cin>>p[i];
    REP(i,k){
        if(p[i]==a||p[i]==b){
            cout << "NO" << endl;
            return 0;
        }
        FOR(j,i+1,k){
            if(p[i]==p[j]){
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
}
