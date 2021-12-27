#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> pfact(int n){
    vector<int> ans;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            n/=i;
            ans.push_back(i);
        }
    }
    if(n!=1)ans.push_back(n);
    return ans;
}

int main(void){
    int n,m;
    cin>>n>>m;
    vector<bool> ans(m+1,true);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vector<int> ap=pfact(a);
        for(auto &v:ap){
            if(ans[v]){
                for(int j=v;j<m+1;j+=v)ans[j]=false;
            }
        }
    }
    vector<int> res;
    for(int i=1;i<=m;i++){
        if(ans[i]){
            res.push_back(i);
        }
    }
    cout<<res.size()<<endl;
    for(auto &v:res){
        cout<<v<<endl;
    }
    return 0;
}
