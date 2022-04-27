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

const int MAX=200000;

int n,x,y;
int a[MAX];

ll solve(const vector<ll>& b){
    ll ans=0;
    int n=b.size();
    int right=0;
    int cntx=0,cnty=0;
    for(int left=0;left<n;left++){
        while(right<n&&!(cntx>=1&&cnty>=1)){
            if(b[right]==x)cntx++;
            if(b[right]==y)cnty++;
            right++;
        }
        if(cntx>=1&&cnty>=1)ans+=n-right+1;
        if(b[left]==x)cntx--;
        if(b[left]==y)cnty--;
    }
    return ans;
}

int main(void){
    cin>>n>>x>>y;
    vector<ll> a(n);
    REP(i,n)cin>>a[i];
    vector<ll> b;
    ll ans=0;
    for(int i=0;i<n;i++){
        if(a[i]>x||a[i]<y){
            ans+=solve(b);
            b.clear();
        }else{
            b.push_back(a[i]);
        }
    }
    ans+=solve(b);
    cout<<ans<<endl;
}
