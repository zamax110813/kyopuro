#include<bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
typedef long long ll;
constexpr long long LLINF=1e18+1;
ll solve(const vector<vector<int>> &a,ll c){
    int h=a.size(),w=a[0].size();
    vector<vector<ll>> ans(h+1,vector<ll>(w+1,LLINF));
    ll res=LLINF;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            ans[i+1][j+1]=min(ans[i][j+1],ans[i+1][j]);
            if(ans[i+1][j+1]!=LLINF)res=min(res,ans[i+1][j+1]+a[i][j]+c*(i+j));
            ans[i+1][j+1]=min(ans[i+1][j+1],(ll)a[i][j]-c*(i+j));
        }
    }
    return res;
}

int main(void){
    int h,w;
    ll c;
    cin>>h>>w>>c;
    vector<vector<int>> a(h,vector<int>(w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>a[i][j];
        }
    }
    ll ans=LLINF;
    ans=min(ans,solve(a,c));
    reverse(a.begin(),a.end());
    ans=min(ans,solve(a,c));
    for(int i=0;i<h;i++)reverse(a[i].begin(),a[i].end());
    ans=min(ans,solve(a,c));
    reverse(a.begin(),a.end());
    ans=min(ans,solve(a,c));
    cout<<ans<<endl;
    return 0;

}
