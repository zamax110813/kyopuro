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
    vector<bool> used(2*n+1,false);
    cout<<1<<endl;
    cout<<flush;
    used[0]=true;
    while(1){
        int a;
        cin>>a;
        if(a==0){
            return 0;
        }
        a-=1;
        used[a]=true;
        for(int i=0;i<used.size();i++){
            if(!used[i]){
                cout<<i+1<<endl;
                cout<<flush;
                used[i]=true;
                break;
            }
        }
    }
}
