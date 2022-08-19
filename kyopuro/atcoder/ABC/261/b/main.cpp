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
    int n;
    cin>>n;
    vector<string> A(n);
    REP(i,n)cin>>A[i];
    bool flag=false;
    REP(i,n){
        REP(j,n){
            if(i==j)continue;
            if(A[i][j]=='W'&&A[j][i]!='L'){
                flag=true;
            }else if(A[i][j]=='L'&&A[j][i]!='W'){
                flag=true;
            }else if(A[i][j]=='D'&&A[j][i]!='D'){
                flag=true;
            }
        }
        if(flag){
            cout<<"incorrect"<<endl;
            return 0;
        }
    }
    cout<<"correct"<<endl;

}
