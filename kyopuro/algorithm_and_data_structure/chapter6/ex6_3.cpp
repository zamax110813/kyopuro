#include<bits/stdc++.h>
using namespace std;
const long long INF=1LL<<60;

/*

N  個の正の整数 P1,…,PN が与えられる。これらの整数のうちから重複を許して 4 個まで選んで総和をとる (1 個も選ばなくても構わない)。
総和が M 以下ならば、その値が得点となる
総和が M より大きいならば、得点は 0 点となる
獲得できる得点の最大値を求めよ。

＊選べる個数が1~4個となるのがややこしいので,正の整数に0を付け加えて,必ず4個選ぶことにする
＊単純にいくとO(N^4)かかるので,2個+2個に分けて考える
  0を含むN+1個の中から2個選んで和を取った物を列挙する.列挙した集合をSとすると問題は次のように帰着できる

*/

int main(void){
  long long N,M;
  cin>>N>>M;
  vector<long long> a(N);
  for(int i=0;i<N;i++)cin>>a[i];
  a.push_back(0);
  vector<long long> S;
  for(int i=0;i<a.size();i++){
    for(int j=0;j<a.size();j++){
      S.push_back(a[i]+a[j]);
    }
  }
  sort(S.begin(),S.end());
  long long res=0;
  for(int i=0;i<S.size();i++){
    auto iter=upper_bound(S.begin(),S.end(),M-S[i]);
    if(iter==S.begin())continue; //iterがS[0]を指した場合の処理
    iter--;
    res=max(res,S[i]+*iter);
  }
  cout<<res<<endl;
}