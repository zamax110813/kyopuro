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
    int k,n;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> nums;
    if(s[0]=='0')nums.push_back(0);
    for (int i = 0; i < n;) {
        int j = i;
        while (j < n && s[j] == s[i]) ++j; // S[i] の数値がどこまで続くか
        nums.push_back(j - i);
        i = j;
    }
    if(s[n-1]=='0')nums.push_back(0);
    int ans=0;
    vector<int> sums(nums.size()+1,0);
    for(int i=0;i<nums.size();i++)sums[i+1]=sums[i]+nums[i];
    for(int i=0;i<sums.size();i+=2){
        int right=i+2*k+1;
        if(right>=sums.size())right=sums.size()-1;
        ans=max(ans,sums[right]-sums[i]);
    }
    cout << ans << endl;

}
