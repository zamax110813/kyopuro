#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    int l,r;
    cin>>l>>r;
    string s;
    cin>>s;
    string ans;
    ans=s.substr(l-1,r-l+1);
    reverse(ans.begin(),ans.end());
    cout<<s.substr(0,l-1)+ans+s.substr(r,s.size())<<endl;
}