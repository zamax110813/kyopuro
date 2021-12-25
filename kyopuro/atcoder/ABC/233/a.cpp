#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    int x,y;
    cin>>x>>y;
    int ans=0;
    int remain=y-x;
    while(remain>0){
        ans++;
        remain-=min(remain,10);
    }
    cout<<ans<<endl;
}