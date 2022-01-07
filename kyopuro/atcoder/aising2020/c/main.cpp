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
    vector<int> ans(n+1);
    
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
             for(int k=1;k<=100;k++){
                 int tmp=i*i+j*j+k*k+i*j+j*k+k*i;
                if(tmp<=n){
                   ans[tmp]++;
                }
            }
        }
    }

    REP(i,n){
        cout<<ans[i+1]<<endl;
    }
}
