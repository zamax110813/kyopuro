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
    vector<string> s(3);
    REP(i,3)cin>>s[i];
    int turn=0;
    vector<int> pos(3,0);
    while(1){
        if(pos[turn]<s[turn].size()){
            char head=s[turn][pos[turn]];
            pos[turn]++;
            if(head=='a')turn=0;
            else if(head=='b')turn=1;
            else if(head=='c')turn=2;
        }else{
            if(turn==0)cout<<"A"<<endl;
            else if(turn==1)cout<<"B"<<endl;
            else cout<<"C"<<endl;
            return 0;
        }
    }
}
