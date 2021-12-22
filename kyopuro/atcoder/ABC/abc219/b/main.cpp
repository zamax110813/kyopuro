#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    string s1,s2,s3,t;
    cin>>s1>>s2>>s3>>t;
    string ans;
    for(int i=0;i<t.size();i++){
        if(t[i]-'0'==1){
            ans+=s1;
        }else if(t[i]-'0'==2){
            ans+=s2;
        }else if(t[i]-'0'==3){
            ans+=s3;
        }
    }
    cout<<ans<<endl;

}
