#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,W;
vector<int> w(100),v(100);

int rec(int i,int j){
        int res;
        if(i==n){
            res=0;
        }else if(j<w[i]){
            res=rec(i+1,j);
        }else{
            res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
        }
        return res;
}

int main(void){
    cin>>n>>W;
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    cout<<rec(0,W)<<endl;
}