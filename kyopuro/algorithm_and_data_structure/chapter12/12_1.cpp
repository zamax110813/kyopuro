#include<bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int> &a){
  for(int i=1;i<a.size();i++){
    int v=a[i];
    int j=i;
    for(;j>0;j--){
      if(a[j-1]>v){
        a[j]=a[j-1];
      }else{
        break;
      }
    }
    a[j]=v;
  }
}

int main(void){
  int N;
  cin>>N;
  vector<int> a(N);
  for(int i=0;i<N;i++)cin>>a[i];

  InsertionSort(a);
}