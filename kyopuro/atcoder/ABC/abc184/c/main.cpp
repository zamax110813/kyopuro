#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long INF=1LL<<60;

#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=ll(b);i--)
#define FORA(i,I) for(const auto& i;I)

//x:コンテナ
#define ALL(x) x.begin(),x.end()
#define SIZE(x) ll(x.size())

int main(void){
    int r1,r2,c1,c2;
    cin>>r1>>r2>>c1>>c2;
    if(r1==c1&&r2==c2){
        cout<<0<<endl;
        return 0;
    }else if(r1+r2==c1+c2||r1-r2==c1-c2||abs(r1-c1)+abs(r2-c2)<=3){
        cout<<1<<endl;
        return 0;
    }else if((r1+r2+c1+c2)%2==0||abs(r1-c1)+abs(r2-c2)<=6||abs((r1+r2)-(c1+c2))<=3||abs((r1-r2)-(c1-c2))<=3){
        cout<<2<<endl;
        return 0;
    }else{
        cout<<3<<endl;
        return 0;
    }
}


