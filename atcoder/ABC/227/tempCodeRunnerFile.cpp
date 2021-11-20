#include<bits/stdc++.h>
using namespace std;

int main(void){
  int N,K,A;
  cin>>N>>K>>A;
  int index=A;
  while(K>0){
    K--;
    if(index==N)index=1;
    else if(K!=0) index++;
  }
  cout<<index<<endl;
}