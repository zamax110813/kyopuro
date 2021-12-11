#include<bits/stdc++.h>
using namespace std;

int main(void){
  int N,X;
  cin>>N>>X;
  vector<int> A(N);
  for(int i=0;i<N;i++)cin>>A[i];
  vector<bool> flag(N,false);
  flag[X-1]=true;
  int cnt=1;
  int spoiler=X-1;
  while(1){
    if(flag[A[spoiler]-1]==false){
      flag[A[spoiler]-1]=true;
      spoiler=A[spoiler]-1;
      cnt++;
    }else{
      break;
    }
  }
  cout<<cnt<<endl;
}