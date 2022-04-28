#include<bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<(ll)n;i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)b;i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)b;i--)
#define FORA(i,I) for(const auto& i:I)
#define ALL(x) x.begin(),x.end()
#define SIZE(x) ll(x.size())
#define F first
#define S second

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; } 

int main(void){
    int q;
    cin>>q;
    deque<pair<ll,ll>> deque;
    for(int i=0;i<q;i++){
        int query;
        cin>>query;
        if(query==1){
            ll x,c;
            cin>>x>>c;
            deque.push_back(make_pair(x,c));
        }else{
            ll c;
            cin>>c;
            ll ans=0;
            while(1){
                ll num=deque.front().S;
                ll x=deque.front().F;
                if(num>c){
                    ans+=c*x;
                    ll cnt=num-c;
                    deque.pop_front();
                    deque.push_front(make_pair(x,cnt));
                    break;
                }else if(num==c){
                    ans+=c*x;
                    deque.pop_front();
                    break;
                }else{
                    ans+=num*x;
                    c-=num;
                    deque.pop_front();
                }
            }
            cout<<ans<<endl;
        }
    }
}
