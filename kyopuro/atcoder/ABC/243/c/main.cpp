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
    int n;
    cin>>n;
    vector<pair<int,int>> cord(n);
    REP(i,n){
        cin>>cord[i].F>>cord[i].S;
    }
    map<int,int> map;
    string S;
    cin>>S;
    REP(i,n){
        if(S[i]=='L'){
            if(map.find(cord[i].S)==map.end()){
                map[cord[i].S]=cord[i].F;
                continue;
            }
            if(map[cord[i].S]<cord[i].F)map[cord[i].S]=cord[i].F;
        }
    }
    REP(i,n){
        if(S[i]=='R'){
            auto iter=map.find(cord[i].S);
            if(iter!=map.end()){
                if(iter->second>cord[i].F){
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"No"<<endl;

}
