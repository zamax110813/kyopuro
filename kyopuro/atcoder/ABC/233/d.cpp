#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    int n;
    ll k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll> sum(n+1,0);
    for(int i=0;i<n;i++){
        sum[i+1]=sum[i]+a[i];
    }
    map<ll,ll> map;
    int ans=0;
    for(int r=1;r<n+1;r++){
        map[sum[r-1]]++;
        ans+=map[sum[r]-k];
    }
    cout<<ans<<endl;

}

