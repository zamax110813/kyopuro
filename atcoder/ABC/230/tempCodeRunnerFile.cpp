#include<bits/stdc++.h>
using namespace std;

int main(void){
    long long N,A,B,P,Q,R,S;
    cin>>N>>A>>B>>P>>Q>>R>>S;
    vector<vector<bool>> grid(N,vector<bool>(N,false));
    long long minab=min(N-A,N-B);
    for(long long k=0;k<=minab;k++){
        grid[A+k][B+k]=true;
    }
    long long maxab=max(1-A,B-N);
    minab=min(N-A,B-1);
    for(long long k=maxab;k<=minab;k++){
        grid[A+k][B-k]=true;
    }
    for(long long i=P;i<=Q;i++){
        for(long long j=R;j<=S;j++){
            if(grid[i][j]==true)cout<<'#';
            else cout<<'.';
        }
        cout<<endl;
    }
}
