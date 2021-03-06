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
    int left=0,right=n-1;
    string r,l,m;
    for(int i=0;i<20;i++){
        int mid=(right+left)/2;
        if(i==0){
            cout<<left<<endl;
            cin>>l;
            cout<<right<<endl;
            cin>>r;
            if(l=="Vacant"||r=="Vacant")return 0;
        }else{
            cout<<mid<<endl;
            flush(cout);
            cin>>m;
            if(m=="Vacant")return 0;
            else if((m==l&&(mid-left)%2==1)||(m!=l&&(mid-left)%2==0)){
                right=mid;
                r=m;
            }
            else if((m==r&&(right-mid)%2==1)||(m!=r&&(right-mid)%2==0)){
                left=mid;
                l=m;
            }
        }
    }
}
