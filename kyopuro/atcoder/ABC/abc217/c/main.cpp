#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        int ind;
        cin>>ind;
        p[ind-1]=i+1;
    }
    for(int i=0;i<n-1;i++){
        cout<<p[i]<<" ";
    }
    cout<<p[n-1]<<endl;
}
