#include<bits/stdc++.h>
using namespace std;

struct Heap{
  vector<int> heap;
  Heap(){}

  void push(int x){ 
    heap.push_back(x);
    int i=heap.size()-1;
    while(i>0){
      int p=(i-1)/2;
      if(heap[p]>=x)break;
      heap[i]=heap[p];
      i=p;
    }
    heap[i]=x;
  }

  int top(){
      if(!heap.empty())return heap[0];
      else return -1;
  }

  void pop(){
          if(!heap.empty())return;
          int x=heap.back();
          int i=0;
          while(i*2+1<heap.size()){
                  int child1=i*2+1,child2=i*2+2;
                  if(child2<heap.size()&&heap[child2]>heap[child1]){
                          child1=child2;
                  }
                  if(heap[child1]<=x)break;
                  heap[i]=heap[child1];
                  i=child1;
          }
          heap[i]=x;
  }
};

int main(){
        Heap h;
        h.push(5);h.push(3);h.push(7);h.push(1);
        cout<<h.top()<<endl;
        h.pop();
        cout<<h.top()<<endl;

        h.push(11);
        cout<<h.top()<<endl;
}
