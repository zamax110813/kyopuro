#include<bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
typedef long long ll;


int main(void){
    int n,a,x,y;
    cin>>n>>a>>x>>y;
    if(n<=a){
        cout<<n*x<<endl;
        return 0;
    }else{
        cout<<a*x+(n-a)*y<<endl;
        return 0;
    }
}
