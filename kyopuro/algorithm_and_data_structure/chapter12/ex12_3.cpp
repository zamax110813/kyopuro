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

int main(void){
    int N,K;
    cin>>N>>K;
    priority_queue<int,vector<int>,greater<int>> low;
    vector<int> a(N);
    REP(i,N)cin>>a[i];
    REP(i,N){
        if(i<K-1)low.push(a[i]);
        else{
            int k_smallest=low.top();
            if(k_smallest>a[i]){
                low.pop();
                low.push(a[i]);
                k_smallest=low.top();
            }
            cout<<i<<" : "<<k_smallest<<endl;
        }
    }
}