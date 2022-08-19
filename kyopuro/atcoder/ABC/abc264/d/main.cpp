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

const long long INF=1LL<<60;

int main(void){
    string s;
    cin>>s;
    queue<string> que;
    map<string,int> map;
    que.push(s);
    map[s]=0;
    while(!que.empty()){
        string now=que.front();
        que.pop();
        if(now=="atcoder"){
            cout<<map[now]<<endl;
            return 0;
        }
        for(int i=0;i<6;i++){
            string next=now;
            swap(next[i],next[i+1]);
            if(map.find(next)==map.end()){
                map[next]=map[now]+1;
                que.push(next);
            }
        }
    }
}
