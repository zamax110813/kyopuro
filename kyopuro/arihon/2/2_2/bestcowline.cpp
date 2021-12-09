#include<bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin>>s;
    int left=0,right=s.size()-1;
    while(right-left>=0){
        bool side=false;
        for(int i=0;left+i<=right;i++){
            if(s[left+i]<s[right-i]){
                side=true;
                break;
            }else if(s[left+i]>s[right-i]){
                side=false;
                break;
            }
        }
        if(side)cout<<s[left++];
        else cout<<s[right--];
    }
    cout<<endl;
}