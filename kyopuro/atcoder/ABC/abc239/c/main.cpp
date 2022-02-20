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
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    vector<pair<int,int>> moves;
    vector<int> num{-2,-1,1,2};
    for(auto i:num){
        for(auto j:num){
            if(abs(i)==abs(j))continue;
            moves.push_back(make_pair(i,j));
        }
    }
    for(auto i:moves){
        for(auto j:moves){
            if(x1+i.first+j.first==x2&&y1+i.second+j.second==y2){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;

}
