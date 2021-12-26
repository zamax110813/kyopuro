#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    ll n;
    cin>>n;
    int k=0;
    while(1){
        if(ll(pow(2,k))>n){
            cout<<k-1<<endl;
            return 0;
        }
        else k++;
    }
}
