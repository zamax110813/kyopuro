#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(void){
    string s,t;
    cin>>s>>t;
    for(int i=0;i<26;i++){
        string s2=s;
        for(int j=0;j<s.size();j++){
            s2[j]=((s2[j]-'a')+i)%26+'a';
        }
        if(s2==t){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}


