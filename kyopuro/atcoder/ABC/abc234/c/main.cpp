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
    ll k;
    cin>>k;
    string ans;
    while(k>0){
        ans.push_back((k%2)+'0');  //数値を数字に変換したい場合は+'0',数字を数値に変換したい場合は-'0'
        k/=2;
    }
    reverse(ALL(ans));
    for(auto &s:ans){
        if(s=='1'){
            cout<<2;
        }else cout<<0;
    }
    cout<<endl;
}
