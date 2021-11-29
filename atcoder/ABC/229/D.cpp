#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    long long K;
    cin>>S>>K;
    long long N=S.size();
    vector<long long> sum(N+1);

    //[0,1)~[0,n)のそれぞれの半開区間に含まれる'.'の個数を求める
    //もしS[i]が'.'ならば,sum[i+1]([0,i+1)に含まれる'.'の個数)にsum[i]+1を代入する
    //S[i]が'#'なら,sum[i+1]にsum[i]を代入する
    //初期状態はsum[0]([0,0)に含まれる'.'の個数)が0
    for(int i=0;i<N;i++){
        if(S[i]=='.')sum[i+1]=sum[i]+1;
        else sum[i+1]=sum[i];
    }

    long long ans=0;
    long long right=0;
    for(long long left=0;left<N;left++){
        while(sum[right+1]-sum[left]<=K&&right<N){
            right++;
        }
        ans=max(ans,right-left);
    }
    cout<<ans<<endl;
}