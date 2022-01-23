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

int black[10][10];

int main(void){
    int h,w,k;
    cin>>h>>w>>k;
    vector<string> c(h);
    REP(i,h)cin>>c[i];
    int ans=0;
    for(int i=0;i<(1<<h);i++){
        for(int j=0;j<(1<<w);j++){
            int cnt=0;
            for(int k=0;k<h;k++){
                if(i&(1<<k)!=0)continue;
                for(int l=0;l<w;l++){
                    if(j&(1<<l)!=0)continue;
                    if(c[k][l]=='#')cnt++;
                }
            }
            if(cnt==k)ans++;
        }
    }
    cout << ans << endl;

}
