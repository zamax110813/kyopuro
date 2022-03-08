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

vector<int> d;

bool isValid(int n){
    while(n){
        for(auto v:d){
            if(n%10==v)return false;
        }
        n/=10;
    }
    return true;
}

int main(void){
    int n,k;
    cin>>n>>k;
    REP(i,k){
        int tmp;
        cin>>tmp;
        d.push_back(tmp);
    }
    for(int i=n;;i++){
        if(isValid(i)){
            cout<<i<<endl;
            return 0;
        }
    }
}
