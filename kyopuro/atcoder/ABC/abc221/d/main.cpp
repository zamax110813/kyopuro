#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    ll N;
    cin>>N;
    vector<pair<ll,ll>> x;
    int a,b;
    for(int i=0;i<N;i++){
        cin>>a>>b;
        x.push_back({a,1});
        x.push_back({a+b,-1});
    }
    sort(x.begin(),x.end());
    vector<int> ans(N+1,0);
    int cnt=0;
    for(int i=0;i<(x.size())-1;i++){
        cnt+=x[i].second;
        ans[cnt]+=x[i+1].first-x[i].first;
    }

    for(int i=0;i<N-1;i++){
        cout<<ans[i+1]<<" ";
    }

    cout<<ans[N]<<endl;

}
