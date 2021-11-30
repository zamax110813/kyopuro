#include<bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    string S;
    cin>>N>>S;
    int ans=0;
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(S[i]==S[j])ans++;
        }
    }
    cout<<ans<<endl;
}