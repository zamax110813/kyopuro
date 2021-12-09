#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    ll n;
    cin>>n;
    vector<ll> l(n);
    for(ll i=0;i<n;i++)cin>>l[i];
    ll ans=0;
    sort(l.begin(),l.end());
    while(l.size()>1){
       ans+=l[0]+l[1];
       l[1]=l[0]+l[1];
       l.erase(l.begin());
       sort(l.begin(),l.end());
    }
    cout<<ans<<endl;
}