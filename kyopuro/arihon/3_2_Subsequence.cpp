#include<bits/stdc++.h>
using namespace std;

//尺取り法

int main(){
    int N;
    long long S;
    cin>>N>>S;
    vector<long long> a(N);
    for(int i=0;i<N;i++)cin>>a[i];

    //条件を満たす区間の長さの最小値res
    int res=N+1;//上界を入れておく

   //区間の左端leftで場合分け
   int right=0;
   long long sum=0;
   for(int left=0;left<N;left++){
       //[left,right)の総和がS以上となる最小のrightを求める
       while(right<N&&sum<S){
           sum+=a[right];
           right++;
       }

       //更新
       if(sum<S)break;//これ以上leftを進めてもだめ
       res=min(res,right-left);

       if(right==left)right++;
       else sum-=a[left];
   }
   if(res<N+1)cout<<res<<endl;
   else cout<<0<<endl;
}