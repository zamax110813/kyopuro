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
vector<int> dx={1,1,0,-1,-1,-1,0,1},dy={0,1,1,1,0,-1,-1,-1};

int main(void){
    int n;
    cin>>n;
   vector<string> masu(n);
   REP(i,n){
       cin>>masu[i];
   }
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           for(int l=0;l<8;l++){
               int xdif=dx[l],ydif=dy[l];
               int xpos=j,ypos=i;
               int black=0;
               bool can=true;
               for(int m=0;m<6;m++){
                   if(xpos>=0&&xpos<n&&ypos>=0&&ypos<n){
                       if(masu[ypos][xpos]=='#')black++;
                       xpos+=xdif;
                       ypos+=ydif;
                   }else{
                       can=false;
                       break;
                   }
               }
               if(can&&black>=4){
                   cout<<"Yes"<<endl;
                   return 0;
               }
           }
       }
   }
   cout<<"No"<<endl;
}
