#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    int n;
    cin>>n;
    map<pair<string,string>,int> map;
    for(int i=0;i<n;i++){
        string s,t;
        cin>>s>>t;
        map[make_pair(s,t)]++;
    }
    for(auto v:map){
        if(v.second>=2){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}
