#include<bits/stdc++.h>
using namespace std;
const long long INF=1LL<<60;

/*
最適化問題を解くときは,判定問題を考えて二分探索できないかを考える
今回は
N個の小屋からM個選び,任意の小屋間の距離をX以上にすることは可能か？
解答としては,上の判定問題がYesとなるような最大のXとなる

leftを0(確実にYes),rightをINF(確実にNo)とする
*/

int main(void){
  int N,M;
  cin>>N>>M;
  vector<long long> a(N);
  for(int i=0;i<N;i++)cin>>a[i];
  
  long long left=0;
  long long right=INF;
  while(right-left>1){
    long long mid=(right+left)/2;
    int cnt=1;
    int prev=0;
    for(int i=1;i<N;i++){
      if(a[i]-a[prev]>=mid){
        cnt++;
        prev=i;
      }
    }
    if(cnt>=M)left=mid;
    else right=mid;
  }
  cout<<left<<endl;
}