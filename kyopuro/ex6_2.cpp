#include<bits/stdc++.h>
using namespace std;

int main(void){
  int N;
  cin>>N;
  vector<long long> a(N),b(N),c(N);
  for(int i=0;i<N;i++){
    cin>>a[i];
  }
  for(int i=0;i<N;i++){
    cin>>b[i];
  }
  for(int i=0;i<N;i++){
    cin>>c[i];
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  sort(c.begin(),c.end());
  long long ans=0;

  /* 
  ＊三個のものを考える時は真ん中を固定して考える(定石)
  ＊lower_boundはkey以上となる配列の要素の最小のindexを返す
  ＊upper_boundはkeyより大きい配列の要素の最小のindexを返す
  */
  for(int i=0;i<N;i++){
    long long one=lower_bound(a.begin(),a.end(),b[i])-a.begin();          
    long long three=N-(upper_bound(c.begin(),c.end(),b[i])-c.begin());  
    ans+=one*three;   
  }

  cout<<ans<<endl;
  return 0;
}