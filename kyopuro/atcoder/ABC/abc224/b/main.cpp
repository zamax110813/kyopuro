#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    ll n,w;
    cin>>n>>w;
    vector<vector<ll>> a(n,vector<ll>(w));
    for(int i=0;i<n;i++){
        for(int j=0;j<w;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            for(int k=0;k<w-1;k++){
                for(int l=k+1;l<w;l++){
                    if(a[i][k]+a[j][l]>a[j][k]+a[i][l]){
                        cout<<"No"<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"Yes"<<endl;
    
}
