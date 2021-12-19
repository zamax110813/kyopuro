#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    string N;
    cin>>N;
    sort(N.rbegin(),N.rend());
    ll A=0,B=0;
    for(int i=0;i<N.size();i++){
        if(i%2==0){
            if(A>B){
                B=B*10+ll(N[i]-'0');
            }else{
                A=A*10+ll(N[i]-'0');
            }
        }else{
            if(A>B){
                B=B*10+ll(N[i]-'0');
            }else{
                A=A*10+ll(N[i]-'0');
            }
        }
    }
    cout<<A*B<<endl;

}
