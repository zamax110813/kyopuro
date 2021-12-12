#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int battle(int p1,int p2,int round,const vector<vector<char>> &hands){
    char l=hands[p1][round];
    char r=hands[p2][round];
    if(l==r)return -1;
    if(l=='G'&&r=='C')return p1;
    if(l=='C'&&r=='P')return p1;
    if(l=='P'&&r=='G')return p1;
    else return p2;
}


int main(void){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> a(2*n,vector<char>(m));
    vector<int> wincount(2*n,0);
    vector<int> rank;
    for(int i=0;i<2*n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
        rank.push_back(i);
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int win=battle(rank[2*j],rank[2*j+1],i,a);
            if(win==-1)continue;
            wincount[win]++;
        }
        sort(rank.begin(),rank.end(),[&](int a,int b){
            if(wincount[a]!=wincount[b])return wincount[a]>wincount[b];
            else return a<b;
        });
    }
    for(int i=0;i<2*n;i++){
        cout<<rank[i]+1<<endl;
    }
}
