#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(void){
    int n,m;
    cin>>n>>m;
    vector<vector<bool>> takahashi(n,vector<bool>(n,false)),aoki(n,vector<bool>(n,false));
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        takahashi[a-1][b-1]=true;
        takahashi[b-1][a-1]=true;
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        aoki[a-1][b-1]=true;
        aoki[b-1][a-1]=true;
    }
    vector<int> p(n);
    for(int i=0;i<n;i++){
        p[i]=i;
    }
    do{
        bool same=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(takahashi[i][j]!=aoki[p[i]][p[j]]){
                    same=false;
                }
            }
        }
        if(same){
            cout<<"Yes"<<endl;
            return 0;
        }
    }while(next_permutation(p.begin(),p.end()));
    cout<<"No"<<endl;
    return 0;
}


