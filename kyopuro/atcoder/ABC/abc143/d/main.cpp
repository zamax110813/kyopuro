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

// int main(void){
//         int n;
//         cin>>n;
//         vector<int> l(n);
//         REP(i,n)cin>>l[i];
//         sort(ALL(l));
//         int ans=0;
//         for(int i=n-1;i>=0;i--){
//                 for(int j=i-1;j>=0;j--){
//                         auto iter=lower_bound(ALL(l),l[i]+l[j]);
//                         int k=distance(iter,l.end());
//                         ans+=n-(i+1)-k;
//                 }
//         }
//         cout<<ans<<endl;
// }

int main(void){
	int n;
	cin>>n;
	vector<int> l(n);
	REP(i,n)cin>>l[i];
	sort(ALL(l));
	ll res=0;
	for(int i=0;i<n;i++){
		int k=i;
		for(int j=i+1;j<n;j++){
			while(k<n&&l[k]<l[i]+l[j])k++;
			res+=k-(j+1);
		}
	}
	cout << res << endl;
}

