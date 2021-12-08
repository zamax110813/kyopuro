#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    int n;
    cin>>n;
    vector<ll> x(n),y(n);
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i])==0)continue;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
