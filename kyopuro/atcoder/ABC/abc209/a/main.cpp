#include<bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define repd(i,n) for(ll i=n-1;i>=0;i--)
#define for(i,a,b) for(ll i=a;i<=(ll)b;i++)
#define ford(i,a,b) for(ll i=a;i>=(ll)b;i--)
#define fora(i,I) for(const auto& i:I)
#define ALL(x) x.begin(),x.end()
#define SIZE(x) ll(x.size())
#define F first
#define S second

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; } 

int main(void){
    int a,b;
    cin>>a>>b;
    if(b<a){
        cout << 0 << endl;
        return 0;
    }
    cout << b-a+1 << endl;
}
