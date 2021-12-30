#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    vector<string> s(4);
    set<string> set;
    for(int i=0;i<4;i++){
        cin>>s[i];
        set.insert(s[i]);
    }
    if(set.size()==4){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
