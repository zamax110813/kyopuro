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
    int n;
    ll x;
    string S;
    cin>>n>>x>>S;
    stack<char> stack;
    for(int i=0;i<n;i++){
        if(stack.empty()){
            stack.push(S[i]);
            continue;
        }
        char tmp=stack.top();
        if((tmp=='R'||tmp=='L')&&S[i]=='U'){
            stack.pop();
            continue;
        }
        stack.push(S[i]);
    }
    string s;
    while(!stack.empty()){
        char tmp=stack.top();
        stack.pop();
        s.push_back(tmp);
    }
    reverse(ALL(s));
    REP(i,(int)s.size()){
        if(s[i]=='U')x/=2;
        else if(s[i]=='R')x=x*2+1;
        else x*=2;
    }
    cout<<x<<endl;
    
    
}
