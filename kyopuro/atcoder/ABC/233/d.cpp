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
    int ans=0;
    for(int l=0;l<n;l++){
        for(int r=i+1;r<n+1;r++){
            if(sum[r]==k-sum[l]){
                ans++;
            }
        }
    }
    cout<<ans<<endl;

}