#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    int l,q;
    cin>>l>>q;
    vector<int> c(q),x(q);
    for(int i=0;i<q;i++){
        cin>>c[i]>>x[i];
    }
    set<int> s;
    s.insert(0);
    s.insert(l);
    for(int i=0;i<q;i++){
        if(c[i]==1){
            s.insert(x[i]);
        }else{
            auto iter=s.lower_bound(x[i]);
            cout<<*iter-*prev(iter)<<endl;
        }
    }
}
