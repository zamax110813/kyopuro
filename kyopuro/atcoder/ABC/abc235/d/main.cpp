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

const int M=1e6+10;

int main(void){
    int a,N;
    cin>>a>>N;
    vector<int> dist(M,-1);
    queue<int> que;
    dist[1]=0;
    que.push(1);
    while(!que.empty()){
        int x=que.front();
        que.pop();
        if((ll)x*a<M&&dist[x*a]==-1){
            dist[x*a]=dist[x]+1;
            que.push(x*a);
        }
        if(x>10&&x%10!=0){
            string tmp=to_string(x);
            tmp=tmp[tmp.size()-1]+tmp.substr(0,tmp.size()-1);
            int y=stoi(tmp);
            if(dist[y]==-1){
                dist[y]=dist[x]+1;
                que.push(y);
            }
        }
    }
    cout << dist[N] << endl;


}

