#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    int s,t;
    int ans=0;
    cin>>s>>t;
    for(int a=0;a<=s;a++){
        for(int b=0;b<=s;b++){
            for(int c=0;c<=s;c++){
                if((a+b+c)<=s&&(a*b*c)<=t){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
}
