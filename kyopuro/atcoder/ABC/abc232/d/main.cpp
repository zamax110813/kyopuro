#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(void){
    int h,w;
    cin>>h>>w;
    vector<vector<char>> c(h,vector<char>(w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>c[i][j];
        }
    }
    vector<vector<int>> f(h+1,vector<int>(w+1));
    for(int i=h-1;i>=0;i--){
        for(int j=w-1;j>=0;j--){
            if(c[i][j]=='#')continue;
            f[i][j]=max(f[i+1][j],f[i][j+1])+1;
        }
    }
    cout<<f[0][0]<<endl;

}


