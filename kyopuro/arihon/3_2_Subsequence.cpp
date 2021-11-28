#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,S;
    cin>>N>>S;
    vector<int> a(N);
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    vector<int> sum(N);

   for(int i=0;i<N;i++){
       if(i==0)sum[i]=a[i];
       else sum[i]=sum[i-1]+a[i];
   }

   if(sum[N-1]<S){
       cout<<"0"<<endl;
       return 0;
   }

   int res=N;
   for(int s=0;sum[s]+S<=sum[N];s++){
       int t=lower_bound(sum+s,sum+N,sum[s]+S)-sum;
   }


}