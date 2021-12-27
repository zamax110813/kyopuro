#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long INF=1LL<<60;

int main(void){
    int n;
    cin>>n;
    vector<ll> s(n);
    vector<ll> t(n);
    int idx;
    ll time=1e9;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        cin>>t[i];
        if(time>=t[i]){
            time=t[i];
            idx=i;
        }
    }
    vector<ll> ans(n,INF);
    for(int i=0;i<n;i++){
        ans[(i+idx)%n]=time;
        time=min(t[(i+1+idx)%n],time+s[(i+idx)%n]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }

}
