#include<bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
typedef long long ll;


int main(void){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(i%2==0){
                cout<<"Takahashi"<<endl;
                return 0;
            }else{
                cout<<"Aoki"<<endl;
                return 0;
            }
        }
    }
}
