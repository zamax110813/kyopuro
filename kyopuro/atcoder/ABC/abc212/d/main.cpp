#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    int q;
    cin>>q;
    priority_queue<ll,vector<ll>,greater<ll>> s;
    ll sum=0;
    for(int i=0;i<q;i++){
        int p;
        cin>>p;
        if(p==1){
            ll x;
            cin>>x;
            s.push(x-sum);
        }else if(p==2){
            ll x;
            cin>>x;
            sum+=x;
        }else{
            ll min=s.top();
            s.pop();
            cout<<min+sum<<endl;
        }
    }
}
