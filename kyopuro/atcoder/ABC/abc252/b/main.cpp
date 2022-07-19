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
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> A(n);
    vector<bool> B(k);
    REP(i,n){
        cin>>A[i].F;
        A[i].S=i;
    }
    sort(A.begin(),A.end(),vector<pair<int,int>>());
    REP(i,k){
        int tmp;
        cin>>tmp;
        tmp--;
        B[i]=tmp;
    }
    vector<bool> hate(n,false);
    REP(i,k)hate[B[i]]=true;
    REP(i,n){
        if(hate[A[i].S])continue;
        else{
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;

}
