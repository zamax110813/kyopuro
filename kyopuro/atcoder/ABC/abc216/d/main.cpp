#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    ll n,m;     //n:色の種類,m:筒の数
    cin>>n>>m;    
    vector<queue<int>> a(m);     //筒の中にあるボールの色を管理 
    vector<vector<int>> mem(n);      //筒の一番上にあるボールのうち,それぞれの色がどこの筒にあるかを管理
    queue<int> que;
    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        for(int j=0;j<k;j++){
            int tmp;
            cin>>tmp;
            a[i].push(tmp-1);
        }
        mem[a[i].front()].push_back(i);
    }

    for(int i=0;i<n;i++){
        if(mem[i].size()==2){
            que.push(i);
        }
    }
    while(!que.empty()){
        int now=que.front();
        que.pop();
        for(auto p:mem[now]){
            a[p].pop();
            if(!a[p].empty()){
                mem[a[p].front()].push_back(p);
                if(mem[a[p].front()].size()==2){
                    que.push(a[p].front());
                }
            }
        }
    }
    for(auto p:a){
        if(!p.empty()){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}
