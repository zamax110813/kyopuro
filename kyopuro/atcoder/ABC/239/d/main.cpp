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

int Eratosthenes(int n){
    int N=n+1;
    vector<int> arr(N);
	for(int i = 0; i < N; i++){
		arr[i] = 1;
	}
	for(int i = 2; i < sqrt(N); i++){
		if(arr[i]){
			for(int j = 0; i * (j + 2) < N; j++){
				arr[i *(j + 2)] = 0;
			}
		}
	}
    int ans=0;
	for(int i = 2; i < N; i++){
		if(arr[i]){
			ans++;
		}
	}
    return ans;
}

int main(void){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    bool takahashi=false;
    for(int i=a;i<=b;i++){
        int lower=i+c;
        int upper=i+d;
        if(Eratosthenes(upper)-Eratosthenes(lower-1)==0){
            takahashi=true;
            break;
        }
    }
    if(takahashi)cout<<"Takahashi"<<endl;
    else cout<<"Aoki"<<endl;
}