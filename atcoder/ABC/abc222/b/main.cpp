#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    int n,p;
    cin>>n>>p;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]<p){
            ans++;
        }
    }
    cout<<ans<<endl;

}
