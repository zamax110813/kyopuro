#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(void){
    int n;
    int m;
    cin>>n>>m;
    vector<vector<int>> b(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }
    vector<vector<int>> x(n,vector<int>(m)),y(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            x[i][j]=(b[i][j]+6)/7;
            y[i][j]=(b[i][j]-1)%7+1;
        }
    }
    bool ok=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i>0&&x[i][j]!=x[i-1][j]+1)ok=false;
            if(j>0&&x[i][j]!=x[i][j-1])ok=false;
            if(j>0&&y[i][j]!=y[i][j-1]+1)ok=false;
            if(i>0&&y[i][j]!=y[i-1][j])ok=false;
        }
    }

    if(ok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}

