#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    string s;
    cin>>s;
    if(s[s.size()-1]-'0'>=0&&s[s.size()-1]-'0'<=2){
        cout<<int(atoi(s.c_str()))<<"-"<<endl;
        return 0;
    }else if(s[s.size()-1]-'0'>=3&&s[s.size()-1]-'0'<=6){
        cout<<int(atoi(s.c_str()))<<endl;
        return 0;
    }else{
        cout<<int(atoi(s.c_str()))<<"+"<<endl;
        return 0;
    }
}
