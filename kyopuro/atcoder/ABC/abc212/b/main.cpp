#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    string s;
    cin>>s;
    if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3]){
        cout<<"Weak"<<endl;
        return 0;
    }else{
        for(int i=0;i<3;i++){
            if(s[i+1]-'0'==0&&s[i]-'0'==9)continue;
            if(s[i+1]-'0'!=s[i]-'0'+1){
                cout<<"Strong"<<endl;
                return 0;
            }
        }
        cout<<"Weak"<<endl;
        return 0;
    }
}
