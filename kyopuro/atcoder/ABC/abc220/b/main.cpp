#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(void){
    int K;
    cin>>K;
    string A,B;
    cin>>A>>B;
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    int k=1;
    int a=0,b=0;
    for(int i=0;i<A.size();i++){
        a+=(A[i]-'0')*k;
        k*=K;
    }
    k=1;
    for(int i=0;i<B.size();i++){
        b+=(B[i]-'0')*k;
        k*=K;
    }
    cout<<(ll)a*b<<endl;

}


