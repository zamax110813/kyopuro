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


/*要素数nの配列の最小値を求めるアルゴリズム.少なくともn-1回の比較が必要である*/
int minimum(const vector<int> &a){
    int N=(int)a.size();
    int min=a[0];
    for(int i=1;i<N;i++){
        if(min>a[i])min=a[i];
    }
    return min;
}

/*最小値と最大値を同時に求める方法*/

int main(void){

}