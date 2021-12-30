#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long INF=1LL<<60;

// int main(void){
    // int n,m;
    // cin>>n>>m;
    // vector<ll> a(n),b(m);
    // for(int i=0;i<n;i++)cin>>a[i];
    // for(int i=0;i<m;i++)cin>>b[i];
    // sort(a.begin(),a.end());
    // sort(b.begin(),b.end());
    // ll ans=INF;
//     for(int i=0;i<n;i++){
//         int iter=lower_bound(b.begin(),b.end(),a[i])-b.begin();
//         if(ans>abs(a[i]-b[iter])){
//             ans=abs(a[i]-b[iter]);
//         }
//         if(iter-1>=0){
//            if(ans>abs(a[i]-b[iter-1])){
//                 ans=abs(a[i]-b[iter-1]);
//             } 
//         }
//     }
//     cout<<ans<<endl;
// }

int main(void){
    int n,m;
    cin>>n>>m;
    vector<ll> a(n),b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll ans=INF;
    int i=0,j=0;
    while(i<n&&j<m){
        if(ans>abs(a[i]-b[j])){
            ans=abs(a[i]-b[j]);
        }
        if(a[i]>b[j]){
            j++;
        }else{
            i++;
        }
    }
    cout<<ans<<endl;
}