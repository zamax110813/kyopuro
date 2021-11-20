#include<bits/stdc++.h>
using namespace std;

int main(void){
  int S,T,X;
  cin>>S>>T>>X;
  if(S<T){
    if(X>=S&&X<T)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }else{
    if(X>=T&&X<S)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
  }
}