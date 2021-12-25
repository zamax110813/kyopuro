#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

void rotate(vector<string> &s) {
    vector<string> tmp(n, string(n, 'a'));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tmp[i][j] = s[n - j - 1][i];
        }
    }
 
    s = tmp;
}

pair<int,int> find_top_left(vector<string> &s){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][j]=='#'){
                return {i,j};
            }
        }
    }
}

int main(void){
    cin>>n;
    vector<string> s(n),t(n);
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=0;i<n;i++)cin>>t[i];
    int cnts=0,cntt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][j]=='#')cnts++;
            if(t[i][j]=='#')cntt++;
        }
    }
    if(cnts!=cntt){
        cout<<"No"<<endl;
        return 0;
    }
    for(int i=0;i<4;i++){
        pair<int,int> s_top_left=find_top_left(s);
        pair<int,int> t_top_left=find_top_left(t);
        int x_offset=t_top_left.first-s_top_left.first;
        int y_offset=t_top_left.second-s_top_left.second;
        bool ok=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int ii=i+x_offset;
                int jj=j+y_offset;
                if((ii>=0&&ii<n)&&(jj>=0&&jj<n)){
                    if(s[i][j]!=t[ii][jj]){
                        ok=true;
                    }
                }else{
                    if(s[i][j]=='#'){
                        ok=true;
                    }
                }
                if(ok)break;
            }
            if(ok)break;
        }
        if(!ok){
            cout<<"Yes"<<endl;
            return 0;
        }
        rotate(s);
    }
    cout<<"No"<<endl;
    return 0;
}
