#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll x;
int n;
int ans=0;
vector<vector<ll>> a;

void dfs(ll pos,ll seki){
    if(pos==n){
        if(seki==x)ans++;
        return;
    }

    for(auto v:a[pos]){
        if(seki>x/v){
            continue;
        }
        dfs(pos+1,seki*v);
    }
}

int main(void){
    cin>>n>>x;
    a.resize(n);
    for(int i=0;i<n;i++){
        int L;
        cin>>L;
        a[i].resize(L);
        for(int j=0;j<L;j++)cin>>a[i][j];
    }
    dfs(0,1);
    cout<<ans<<endl;
    return 0;
}