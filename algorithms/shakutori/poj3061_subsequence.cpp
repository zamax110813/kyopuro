#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;


int main(void){
    int Q;
    cin>>Q;
    for(int query=0;query<Q;query++){
        int n;
        cin>>n;
        ll x;
        cin>>x;
        vector<ll> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int res=n+1;
        int right=0;
        ll sum=0;
        for(int left=0;left<n;left++){
            while(right<n&&sum<x){
                sum+=a[right];
                ++right;
            }
            if(sum<x)break;
            res=min(res,right-left);

            if(right==left)++right;
            else sum-=a[left];
        }

        if(res<n+1)cout<<res<<endl;
        else cout<<0<<endl;
    }
}