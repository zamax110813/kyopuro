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
    int na,nb;
    cin>>na>>nb;
    set<int> cup;
    map<int,bool> cap;
    REP(i,na){
        int a;
        cin>>a;
        cup.insert(a);
        cap[a]=true;
    }
    int common=0;
    REP(i,nb){
        int b;
        cin>>b;
        cup.insert(b);
        if(cap[b]==true)common++;
    }

    cout<<fixed<<setprecision(10)<<(double)common/(double)cup.size()<<endl;  //fixedは少数部の桁数をより正確に指定したい場合に用いる。fixedを使用しないとsetprecision の指定した長さが整数部も含むことになる

}


