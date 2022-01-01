#include<bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
typedef long long ll;


int main(void){
    int n,k;
    cin>>n>>k;
    vector<int> c(n+1);
    map<int,int> color;
    for(int i=1;i<=n;i++){
        int a;
        cin>>c[i];
    }
    for(int i=1;i<=k;i++){
        color[c[i]]++;
    }
    int ans=color.size();
    for(int i=k+1;i<=n;i++){
        color[c[i]]++;
        color[c[i-k]]--;
        if(color[c[i-k]]==0){
            color.erase(c[i-k]);
        }
        ans=max(ans,(int)color.size());
    }  
    cout<<ans<<endl;
    return 0;


}
