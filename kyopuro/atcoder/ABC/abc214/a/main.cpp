#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    int n;
    cin>>n;
    if(n>=1&&n<=125){
        cout<<4<<endl;
    }else if(n>=126&&n<=211){
        cout<<6<<endl;
    }else{
        cout<<8<<endl;
    }
}
