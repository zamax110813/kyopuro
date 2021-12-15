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
            A=A*10+int(N[i]-'0');
        }else{
            B=B*10+int(N[i]-'0');
        }
    }
    cout<<A*B<<endl;

}
