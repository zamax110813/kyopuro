#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    vector<ll> c(6);
    vector<ll> value={1,5,10,50,100,500}; 
    for(int i=0;i<6;i++)cin>>c[i];
    ll A;
    cin>>A;
    long long ans=0;
    for(int i=5;i>=0;i--){
        int t=min(A/value[i],c[i]);
        ans+=t;
        A-=t*value[i];
    }
    cout<<ans<<endl;
}