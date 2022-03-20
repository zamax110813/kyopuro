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
    vector<int> a(n);
    REP(i,n)cin>>a[i];
    vector<int> taka_p(n);//高橋くんがA[i]を選んだ時に得られる得点の最大値
    int ans=-101010;
    for(int i=0;i<n;i++){
        int aoki_max=-101010,taka_max=0;//aoki_maxは高橋くんがA[i]を選んだ時に,青木くんが得られる得点の最大値
        for(int j=0;j<n;j++){
            if(i==j)continue;
            int aoki_sum=0,taka_sum=0;//aoki_sum,taka_sumは高橋くんがA[i],青木くんがA[j]を選んだ時の青木くんの得点,高橋くんの得点
            int left=min(i,j),right=max(i,j);
            for(int k=left;k<=right;k++){
                if((k-left)%2)aoki_sum+=a[k];
                else taka_sum+=a[k];
            }
            taka_p[j]=taka_sum;//青木くんがA[j]を選んだ時の,高橋くんの得点
            if(chmax(aoki_max,aoki_sum))taka_max=j;//青木くんの得点の最大値を更新,その時に高橋くんが得た得点を示すtaka_pの要素の添字を記録
        }
        chmax(ans,taka_p[taka_max]);//高橋くんの得点の最大値を更新
    }
    cout<<ans<<endl;
}
