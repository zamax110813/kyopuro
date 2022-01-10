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
//     string s;
//     cin>>s;
//     int n=s.size();

//     //ランレングス圧縮
//     vector<int> res(n,0);       //マスに何人いるか記録
//     vector<int> div({0});     //変わり目をメモ
//     for(int i=0;i<n;){
//         int j=i;
//         while(j<n&&s[i]==s[j])j++;
//         div.push_back(j);

//         //RとLの個数から集計
//         if(s[i]=='L'){
//             int A=div[div.size()-2]-div[div.size()-3];
//             int B=div[div.size()-1]-div[div.size()-2];
//             res[i-1]=(A+1)/2+B/2;
//             res[i]=A/2+(B+1)/2;
//         }

//         //更新
//         i=j;
//     }
// }

//ダブリング
int main(void){
    string s;
    cin>>s;
    int n=s.length();
    int dp[33][101010];
    int ans[101010];

    REP(i,n){
        if(s[i]=='R')dp[0][i]=i+1;
        else dp[0][i]=i-1;
    }

    REP(p,32)REP(i,n)dp[p+1][i]=dp[p][dp[p][i]];
    REP(i,n)ans[dp[32][i]]++;
    REP(i,n){
        if(i)cout<<" ";
        cout<<ans[i];
    }
    cout<<endl;

}