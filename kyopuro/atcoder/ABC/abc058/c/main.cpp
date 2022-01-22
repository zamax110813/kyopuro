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


int num[50][26];

int main(void){
   int n;
   cin>>n;
   REP(i,n){
           	string s;
			cin>>s;
			for(char c:s){
				num[i][c-'a']++;
			}
   }
   string ans="";
   REP(i,26){
	   int mi=5000;
	   REP(j,n){
		   mi=min(mi,num[j][i]);
	   }
	   char c='a'+i;
	   REP(i,mi)ans+=c;
   }
   cout << ans << endl;


}

