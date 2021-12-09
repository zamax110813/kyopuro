#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    int n,r;
    cin>>n>>r;
    vector<int> x(n);
    for(int i=0;i<n;i++)cin>>x[i];
    sort(x.begin(),x.end());
    int ans=0;
    int i=0;
    while(i<n){
        int s=x[i++];
        while(x[i]<=s+r&&i<n)i++;
        int p=x[i-1];
        while(x[i]<=p+r&&i<n)i++;
        ans++;
    }
    cout<<ans<<endl;
}