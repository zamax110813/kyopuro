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

ll gcd(ll a,ll b){
        if(b==0)return a;
        else return gcd(b,a%b);
}

int main(void){
    int n;
    cin>>n;
    vector<int> a(n);
    REP(i,n)cin>>a[i];
    vector<int> left(n+1,0),right(n+1,0);
    for(int i=0;i<n;i++)left[i+1]=gcd(left[i],a[i]);
    for(int i=n-1;i>=0;i--)right[i]=gcd(right[i+1],a[i]);
    int ans=0;
    REP(i,n){
        int l=left[i];
        int r=right[i+1];
        chmax(ans,gcd(l,r));
    }
    cout<<ans<<endl;

}

//SegmentTreeを用いた解法
segtree

Monoid