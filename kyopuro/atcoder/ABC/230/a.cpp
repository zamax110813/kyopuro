#include<bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    cin>>N;
    if(N>=42)cout<<"AGC0"<<N+1<<endl;
    else if(N<10)cout<<"AGC00"<<N<<endl;
    else cout<<"AGC0"<<N<<endl;
    return 0;
}