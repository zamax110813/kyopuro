#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    ll n;
    cin>>n;
    string ans="";
    while(n>0){
        if(n%2==0){
            ans+="B";
            n/=2;
        }else{
            ans+="A";
            n--;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;

}
