#include<bits/stdc++.h>
using namespace std;
const long long INF=1LL<<60;

int main(void){
    int n;
    long long d;
    cin>>n>>d;
    vector<pair<long long,long long>> wall(n);
    for(int i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        wall[i].first=b-1;
        wall[i].second=a-1;
    }
    sort(wall.begin(),wall.end());
    long long ans=0;
    long long punched=-INF;
    long long column;
    for(long long i=0;i<n;i++){
        column=wall[i].first;
        if(wall[i].second>punched+d-1){
            ans++;
            punched=wall[i].first;
        }else continue;
    }
    cout<<ans<<endl;
}