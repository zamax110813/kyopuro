#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    string s;
    cin>>s;
    int k;
    cin>>k;
    sort(s.begin(),s.end());
    int cnt=0;
    do{
        if(cnt==k-1){
            cout<<s<<endl;
            return 0;
        }
        cnt++;
    }while(next_permutation(s.begin(),s.end()));
}
