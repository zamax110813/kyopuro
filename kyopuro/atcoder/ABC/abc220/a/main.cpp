#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(void){
    int A,B,C;
    cin>>A>>B>>C;
    for(int i=A;i<=B;i++){
        if(i%C==0){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}


