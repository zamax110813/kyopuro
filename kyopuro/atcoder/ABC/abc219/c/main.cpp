#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//方針①比較関数の実装　xに関して各英子文字に対し、それが何番目に小さいか表す配列を用意することで比較をO(max|Si|)で行うことができる


int main(void){
    string x;
    int n;
    cin>>x>>n;
    vector<int> pos(26);
    for(int i=0;i<26;i++){
        pos[x[i]-'a']=i;
    }
    vector<string> S(n);
    for(int i=0;i<n;i++){
        cin>>S[i];
    }

    sort(S.begin(),S.end(),[&](const string& s,const string& t){
        //文字列の比較
        int len=min(s.size(),t.size());
        for(int i=0;i<len;i++){
            if(s[i]!=t[i]){
                return pos[s[i]-'a']<pos[t[i]-'a'];
            }
        }
        return s.size()<t.size();
    });
    for(const string& v:S){
        cout<<v<<endl;
    }
}
