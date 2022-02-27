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

int n;
vector<pair<int,int>> cpl;
vector<vector<int>> a;
vector<bool> used;
int culc(){
    if(cpl.size()==n){
        int ans=0;
        for(auto p:cpl){
            ans^=a[p.first][p.second];
        }
        return ans;
    }
    int l;
    for(int i=0;i<2*n;i++){
        if(!used[i]){
            l=i;
            used[i]=true;
            break;
        }
    }
    int tmp=0;
    for(int i=0;i<2*n;i++){
        if(!used[i]){
            used[i]=true;
            cpl.push_back({l,i});
            tmp=max(tmp,culc());
            cpl.pop_back();
            used[i]=false;
        }
    }
    used[l]=false;
    return tmp;
}

int main(void){
    cin>>n;
    a.assign(2*n,vector<int>(2*n,0));
    used.assign(2*n,false);
    for(int i=0;i<2*n-1;i++){
        for(int j=i+1;j<2*n;j++){
            cin>>a[i][j];
        }
    }
    cout<<culc()<<endl;
}
