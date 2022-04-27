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

long long x[300],y[300];
bool flag[300][300];

bool colinear(int i,int j,int k){
    long long val1=(y[k]-y[i])*(x[j]-x[i]);
    long long val2=(y[j]-y[i])*(x[k]-x[i]);
    return (val1==val2);
}

int main(void){
    int n,K;
    cin>>n>>K;
    if(K==1){
        cout<<"Infinity"<<endl;
        return 0;
    }
    REP(i,n)cin>>x[i]>>y[i];
    for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)flag[i][j]=true;
    int ans=0;
    vector<int> used;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(!flag[i][j])continue;
            used.clear();
            used.push_back(i);
            used.push_back(j);
            int cnt=2;
            for(int k=j+1;k<n;k++){
                if(colinear(i,j,k)){
                    cnt++;
                    used.push_back(k);
                }
            }
            if(cnt>=K)ans++;
            for(int ii=0;ii<cnt;ii++)for(int jj=ii+1;jj<cnt;jj++)flag[used[ii]][used[jj]]=false;
        }
    }
    cout<<ans<<endl;
    return 0;
}

