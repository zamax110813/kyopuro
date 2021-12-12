#include<bits/stdc++.h>
using namespace std;

int main(void){
  int N,K;
  cin>>N>>K;
  vector<vector<int> > P(N,vector<int>(3));
  for(int i=0;i<N;i++){
    cin>>P[i][0]>>P[i][1]>>P[i][2];
  }
  vector<int> total(N);
  for(int i=0;i<N;i++){
    total[i]=P[i][0]+P[i][1]+P[i][2];
  }
  vector<bool> can(N,false);
  auto total_sorted=total;
  sort(total_sorted.begin(),total_sorted.end());
  for(int i=0;i<N;i++){
    int greater=N-(upper_bound(total_sorted.begin(),total_sorted.end(),total[i]+300)-total_sorted.begin());
    if(greater<K)can[i]=true;
  }
  for(int i=0;i<N;i++){
    if(can[i]==true)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
}