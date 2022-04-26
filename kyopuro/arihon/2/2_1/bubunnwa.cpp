#include<bits/stdc++.h>
using namespace std;
#define MAX_N 20

vector<int> a(MAX_N);
int n,k;

bool dfs(int i,int sum){
    if(i==n)return sum==k;
    if(dfs(i+1,sum))return true;
    if(dfs(i+1,sum+a[i]))return true;
    return false;
}

int main(void){
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    if(dfs(0,0))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}