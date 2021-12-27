#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a.begin(),a.end());
    cout<<a[n-2].second<<endl;
}
