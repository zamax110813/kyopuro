#include<bits/stdc++.h>
using namespace std;

int main(void){
    string S;
    cin>>S;
    string T="oxx";
    T=T+T+T+T+T+T;
    for(int i=0;i<3;i++){
        if(S==T.substr(i,S.size())){cout<<"Yes"<<endl;return 0;}
    }
    cout<<"No"<<endl;
}