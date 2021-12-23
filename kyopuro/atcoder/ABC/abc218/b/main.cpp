#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    vector<int> p(26);
    for(int i=0;i<26;i++){
        cin>>p[i];
    }
    string ans;
    for(int i=0;i<26;i++){
        ans+=(char)('a'+(p[i]-1));
    }
    cout<<ans<<endl;;
}
