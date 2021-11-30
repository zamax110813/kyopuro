#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<numeric>
#include<limits>
#include<bitset>
#include<functional>
#include<type_traits>
#include<queue>
#include<stack>
#include<array>
#include<random>
#include<utility>
#include<cstdlib>
#include<ctime>
using namespace std;
#define long long ll

struct UnionFind{
    vector<int> par,siz;
    UnionFind(int n):par(n,-1),siz(n,1){}
    int root(int x){
        if(par[x]==-1)return x;
        else return par[x]=root(par[x]);
    }
    bool issame(int x,int y){
        return root(x)==root(y);
    }
    bool unite(int x,int y){
        x=root(x),y=root(y);
        if(x==y)return false;
        if(siz[x]<siz[y])swap(x,y);
        par[y]=x;
        siz[x]+=siz[y];
        return true;
    }
    int size(int x){
        return siz[root(x)];
    }
};

int main(void){
    
}
