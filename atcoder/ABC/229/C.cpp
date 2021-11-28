#include<bits/stdc++.h>
using namespace std;

//改善点
//チーズが残りw[g]使え、現在注目しているチーズがBk[g]残っているとき、そのチーズをmin(w,Bk)[g]使う

int main(){
    long long N,W;
    cin>>N>>W;
    vector<pair<long long,long long> > cheese(N);
    for(int i=0;i<N;i++){
        cin>>cheese[i].first>>cheese[i].second;
    }
    sort(cheese.begin(),cheese.end());
    reverse(cheese.begin(),cheese.end());
    long long happiness=0;
    for(int i=0;i<N;i++){
       happiness+=cheese[i].first*min(W,cheese[i].second);
       W-=min(W,cheese[i].second);
    }
    cout<<happiness<<endl;
}

