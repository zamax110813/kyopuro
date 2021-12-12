#include<bits/stdc++.h>
using namespace std;

int main(void){
  int N;
  cin>>N;
  vector<int> S(N);
  for(int i=0;i<N;i++)cin>>S[i];
  int cnt=0;
  for(int k=0;k<N;k++){
    bool ok=false;
    for(int i=1;i<=1000;i++){
      for(int j=1;j<=1000;j++){
        if(4*i*j+3*i+3*j==S[k]){
          ok=true;
          break;
        }
      }
      if(ok==true)break;
    }
    if(ok==true)cnt++;
  }
  cout<<N-cnt<<endl;
}