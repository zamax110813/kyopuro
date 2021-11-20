#include<bits/stdc++.h>
using namespace std;

int main(void){
  long long N=1LL<<20;
  vector<long long> A(N,-1);
  int Q;
  cin>>Q;
  vector<long long> t(Q),x(Q);
  for(int i=0;i<Q;i++){
    cin>>t[i]>>x[i];
  } 

  for(int i=0;i<Q;i++){
    if(t[i]==1){
      long long h=x[i];
      while(A[h%N]!=-1){
        h++;
      }
      A[h%N]=x[i];
    }else{
      cout<<A[x[i]%N]<<endl;
    }
  }
}