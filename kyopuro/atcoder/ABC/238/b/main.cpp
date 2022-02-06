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
    vector<int> a(n);
    REP(i,n)cin>>a[i];
    int sum=0;
    vector<int> rad;
    rad.push_back(0);
    REP(i,n){
        sum+=a[i];
        if(sum>=360)sum-=360;
        rad.push_back(sum);
    }
    int ans=0;
    sort(ALL(rad));
    for(int i=0;i<rad.size();i++){
        if(i==rad.size()-1){
            if(ans<(360-rad[i])){
                ans=360-rad[i];
            }
        }else if(ans<(rad[i+1]-rad[i])){
            ans=rad[i+1]-rad[i];
        }
    }
    cout<<ans<<endl;
}
