#include<bits/stdc++.h>
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

const int MAX=100000;//配列の値は100000未満とする.

//バケットソート
void BucketSort(vector<int> &a){
    int N=(int)a.size();
    vector<int> num(MAX,0);
    for(int i=0;i<N;i++){
        ++num[a[i]];
    }
    //numの累積和をとる.
    //sum[v]:v以下の値の個数.
    //値a[i]が全体で何番目に小さいかを求める.
    vector<int> sum(MAX,0);
    for(int v=1;v<MAX;v++){
        sum[v]=sum[v-1]+num[v];
    }

    //sumをもとにソート処理
    //a2:aをソートしたもの
    vector<int> a2(N);
    for(int i=N-1;i>=0;--i){
        a2[--sum[a[i]]]=a[i];
    }
    a=a2;
}

int main(void){
    int N;
    cin>>N;
    vector<int> a(N);
    for(int i=0;i<N;i++)cin>>a[i];
    BucketSort(a);
}