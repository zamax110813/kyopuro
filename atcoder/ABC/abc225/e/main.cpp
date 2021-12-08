#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct fraction{
    ll p,q;
    fraction(ll P=0,ll Q=1):p(P),q(Q){}
    bool operator<(const fraction &other)const{
        return p*other.q<q*other.p;
    }
    bool operator<=(const fraction &other)const{
        return p*other.q<=q*other.p;
    }
};

int main(void){
    ll N;
    cin>>N;
    vector<ll> x(N),y(N);
    vector<pair<fraction,fraction>> section(N);
    for(ll i=0;i<N;i++)cin>>x[i]>>y[i];
    for(ll i=0;i<N;i++)section[i]=make_pair(fraction(y[i],x[i]-1),fraction(y[i]-1,x[i]));
    sort(section.begin(),section.end());
    int ans=0;
    fraction now;
    for(auto v:section){
        if(now<=v.second){
            ans++;
            now=v.first;
        }
    }
    cout<<ans<<endl;
}

