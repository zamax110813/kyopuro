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

int main(void){
    string s;
    cin>>s;
    int n=s.size();

    //ランレングス圧縮
    vector<int> res(n,0);       //マスに何人いるか記録
    vector<int> div({0});     //変わり目をメモ
    for(int i=0;i<n;){
        int j=i;
        while(j<n&&s[i]==s[j])j++;
        div.push_back(j);

        //RとLの個数から集計
        if(s[i]=='L'){
            int A=div[div.size()-2]-div[div.size()-3];
            int B=div[div.size()-1]-div[div.size()-2];
            res[i-1]=(A+1)/2+B/2;
            res[i]=A/2+(B+1)/2;
        }

        //更新
        i=j;
    }

    REP(i,n){
        cout<<res[i];
        if(i!=n-1)cout<<" ";
    }
    cout<<endl;
}

//ダブリング
// const int MAX = 20;
// int main() {
//     string S;
//     cin >> S;
//     int N = S.size();

//     vector<vector<int>> next(MAX, vector<int>(N));
//     for (int i = 0; i < N; ++i) {
//         if (S[i] == 'L') next[0][i] = i-1;
//         else next[0][i] = i+1;
//     }
//     for (int d = 0; d+1 < MAX; ++d) {
//         for (int i = 0; i < N; ++i) next[d+1][i] = next[d][next[d][i]];
//     }

//     vector<int> res(N, 0);
//     int K = N*2;
//     for (int v = 0; v < N; ++v) {
//         int nv = v;
//         for (int d = 0; d < MAX; ++d) {
//             if (K & (1<<d)) nv = next[d][nv];
//         }
//         res[nv]++;
//     }
//     for (int v = 0; v < N; ++v) {
//         cout << res[v] ;
//         if(v!=N-1)cout<<" ";
//     }
//     cout << endl;
// }