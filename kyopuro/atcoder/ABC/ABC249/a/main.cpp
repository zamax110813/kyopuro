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
    int A,B,C,D,E,F,X;
    cin>>A>>B>>C>>D>>E>>F>>X;
    int taka=A+C;
    int ao=D+F;
    int ans_t=(X/taka)*B*A;
    int ans_a=(X/ao)*E*D;
    ans_t+=min((X%taka),A)*B;
    ans_a+=min((X%ao),D)*E;
    if(ans_t==ans_a){
        cout<<"Draw"<<endl;
    }else if(ans_t>ans_a){
        cout<<"Takahashi"<<endl;
    }else{
        cout<<"Aoki"<<endl;
    }
}
