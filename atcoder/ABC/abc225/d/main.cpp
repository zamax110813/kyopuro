#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    ll n,q;
    cin>>n>>q;
    vector<ll> front(n+1,-1),rear(n+1,-1);
    for(ll i=0;i<q;i++){
        ll query =0;
        cin>>query;
        if(query==1){
            ll a,b;
            cin>>a>>b;
            rear[a]=b;
            front[b]=a;
        }else if(query==2){
            ll a,b;
            cin>>a>>b;
            rear[a]=-1;
            front[b]=-1;
        }else{
            ll a;
            cin>>a;
            ll tmp=a;
            while(front[tmp]!=-1){
                tmp=front[tmp];
            }
            vector<ll> ans;
            while(tmp!=-1){
                ans.push_back(tmp);
                tmp=rear[tmp];
            }
            cout<<ans.size()<<" ";
            for(ll i=0;i<ans.size();i++){
                cout<<ans[i];
                if(i!=ans.size()-1)cout<<" ";
                else cout<<endl;
            }
        }
    }    
}

