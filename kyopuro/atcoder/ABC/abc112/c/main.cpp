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
    vector<int> x(n+1),y(n+1);
    vector<int> h(n+1);
    REP(i,n){
        cin>>x[i]>>y[i]>>h[i];
    }
    for(int i=0;i<101;i++){
        for(int j=0;j<101;j++){
            int H=0;
            for(int k=0;k<n;k++)if(h[k])H=h[k]+abs(x[k]-i)+abs(y[k]-j);
            bool find=true;
            for(int k=0;k<n;k++){
                if(max(H-abs(x[k]-i)-abs(y[k]-j),0)!=h[k])find=false;
            }
            if(find){
                cout<<i<<" "<<j<<" "<<H<<endl;
                return 0;
            }
        }
    }
}
