#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(void){
    ll N;
    cin>>N;
    vector<ll> A(N);
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    ll X;
    cin>>X;
    ll sumA=0;
    for(int i=0;i<N;i++){
        sumA+=A[i];
    }
    ll ans=0;
    ans+=N*(X/sumA);
    sumA=(X/sumA)*sumA;
    for(int i=0;i<N;i++){
        sumA+=A[i];
        ans++;
        if(sumA>X){
            cout<<ans<<endl;
            return 0;
        }
    }
    return 0;

}


