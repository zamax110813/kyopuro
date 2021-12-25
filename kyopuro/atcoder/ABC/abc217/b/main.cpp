#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    vector<string> contest={"ABC","ARC","AGC","AHC"};
    vector<bool> flag(4,false);
    vector<string> s(3);
    for(int i=0;i<3;i++){
        cin>>s[i];
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(s[i]==contest[j]){
                flag[j]=true;
            }
        }
    }
    for(int i=0;i<4;i++){
        if(flag[i]==false){
            cout<<contest[i]<<endl;
            return 0;
        }
    }
}
