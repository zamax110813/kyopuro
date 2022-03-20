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
    vector<int> a(n),b(n);
    REP(i,n){
        cin>>a[i];
    }
    REP(i,n){
        cin>>b[i];
    }
    int ans1=0;
    REP(i,n){
        if(a[i]==b[i])ans1++;
    }
    int ans2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)continue;
            if(a[i]==b[j])ans2++;
        }
    }
    cout<<ans1<<endl;
    cout<<ans2<<endl;

}
