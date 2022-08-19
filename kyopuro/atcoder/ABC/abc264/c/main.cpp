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
    int h1,w1;
    cin>>h1>>w1;
    vector<vector<int>> A(h1,vector<int>(w1,0));
    REP(i,h1)REP(j,w1)cin>>A[i][j];
    int h2,w2;
    cin>>h2>>w2;
    vector<vector<int>> B(h2,vector<int>(w2,0));
    REP(i,h2)REP(j,w2)cin>>B[i][j];
    for(int i=0;i<(1<<h1);i++){
        for(int j=0;j<(1<<w1);j++){
            vector<int> idx_h,idx_w;
            for(int k=0;k<h1;k++)if(i&(1<<k))idx_h.push_back(k);
            for(int k=0;k<w1;k++)if(j&(1<<k))idx_w.push_back(k);
            if(idx_h.size()!=h2||idx_w.size()!=w2)continue;
            bool same=true;
            for(int k=0;k<h2;k++){
                for(int l=0;l<w2;l++){
                    if(A[idx_h[k]][idx_w[l]]!=B[k][l])same=false;
                }
            }
            if(same){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;

}
