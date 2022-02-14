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

void Heapify(const vector<int> &a,int i,int N){
    int child=i*2+1;
    if(child>=N)return;
    if(child+1<N&&a[child]<a[child+1])++child;
    if(a[child]<=a[i])return 0;
    swap(a[i],a[child]);
    Heapify(a,child,N);
}

void HeapSort(const vector<int> &a){
    int N=(int)a.size();
    for(int i=N/2-1;i>=0;--i){
        Heapify(a,i,N);
    }
    for(int i=N-1;i>=0;--i){
        swap(a[i],a[0]);
        Heapify(a,0,i);
    }
}

int main(void){

}