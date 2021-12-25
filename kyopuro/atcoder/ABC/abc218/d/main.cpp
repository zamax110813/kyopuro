#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[j].first>v[i].first&&v[j].second>v[i].second){
                if(binary_search(v.begin(),v.end(),make_pair(v[j].first,v[i].second))&&binary_search(v.begin(),v.end(),make_pair(v[i].first,v[j].second)))ans++;
            }
        }
    }
    cout<<ans<<endl;
}
