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

void QuickSort(const vector<int> &a,int left,int right){
    if(right-left<=1)return 0;
    int pivot_index=(right+left)/2;
    int pivot=a[pivot_index];
    swap(a[pivot_index],a[right-1]);
    int i=left;
    for(int j=left;j<right-1;j++){
        if(a[j]<a[pivot])swap(a[j],a[i]);
    }
    swap(a[i],a[right-1]);
    QuickSort(a,left,i+1);
    QuickSort(a,i+1,right);

}

