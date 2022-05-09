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

const long long INF=1LL<<60;

int main(void){
    int N,A,B;
    cin>>N>>A>>B;
    int color_h=0,color_w=0;
    int color1=0,color2=0;
    for(int i=0;i<N*A;i++){
        color2=color1;
        for(int j=0;j<N*B;j++){
            if(color2)cout<<"#";
            else cout<<".";
            color_w=(color_w+1)%B;
            if(color_w==0)color2=(color2+1)%2;
        }
        cout<<endl;
        color_h=(color_h+1)%A;
        if(color_h==0)color1=(color1+1)%2;
    }
}
