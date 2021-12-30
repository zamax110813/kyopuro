#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    int a,b;
    cin>>a>>b;
    if(a>0&&b==0){
        cout<<"Gold"<<endl;
    }else if(a==0&&b>0){
        cout<<"Silver"<<endl;
    }else{
        cout<<"Alloy"<<endl;
    }
}
