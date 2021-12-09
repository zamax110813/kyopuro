#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    int n;
    cin>>n;
    vector<pair<int,int>> interval(n);
    for(int i=0;i<n;i++){
        cin>>interval[i].second>>interval[i].first;
    }
    sort(interval.begin(),interval.end());
    int ans=0,tmp=-1;
    for(int i=0;i<n;i++){
        if(interval[i].second>tmp){
            tmp=interval[i].first;
            ans++;
        }
    }
    cout<<ans<<endl;
}