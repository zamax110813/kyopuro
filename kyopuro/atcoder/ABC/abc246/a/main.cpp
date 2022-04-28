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
    vector<int> x(3),y(3);
    map<int,int> mapx,mapy;
    REP(i,3){
        cin>>x[i]>>y[i];
        mapx[x[i]]++;
        mapy[y[i]]++;
    }
    pair<int,int> ans;
    for(auto e:x){
        if(mapx[e]==1){
            cout<<e<<" ";
            break;
        }
    }
    for(auto e:y){
        if(mapy[e]==1){
            cout<<e<<endl;;
            break;
        }
    }
    

}
