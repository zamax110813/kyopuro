#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    string S,T;
    cin>>S>>T;
    if(S==T){
        cout<<"Yes"<<endl;
        return 0;
    }
    string U;
    for(int i=0;i<S.size()-1;i++){
        U=S;
        char s=U[i];
        U[i]=U[i+1];
        U[i+1]=s;
        if(U==T){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}
