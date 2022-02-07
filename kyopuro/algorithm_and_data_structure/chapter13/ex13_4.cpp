#include<bits/stdc++.h>
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

const vector<int> dx={1,0,-1,0};
const vector<int> dy={0,1,0,-1};

int main(void){
    int H,W;
    cin>>H>>W;
    vector<string> maze(H);
    REP(i,H)cin>>maze[i];
    pair<int,int> s,t;
    REP(i,H){
        REP(j,W){
            if(maze[i][j]=='S'){
                s.first=j;
                s.second=i;
            }else if(maze[i][j]=='G'){
                t.first=j;
                t.second=i;
            }
        }
    }
    using Node=pair<int,int>;
    queue<Node> que;
    que.push(s);
    vector<vector<int>> dist(H,vector<int>(W,-1));
    dist[s.first][s.second]=0;
    while(!que.empty()){
        Node v=que.front();
        que.pop();
        for(int i=0;i<4;i++){
            int nx=v.first+dx[i];
            int ny=v.second+dy[i];
            if(nx>=W||nx<0||ny>=H||ny<0)continue;
            if(maze[ny][nx]=='#')continue;
            if(dist[ny][nx]==-1){
                dist[ny][nx]=dist[v.first][v.second]+1;
                que.push(Node(ny,nx));
            }
        }
    }
    cout<<dist[t.first][t.second]<<endl;

}