#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void){
    ll h,w,n;
    cin>>h>>w>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[i]=x-1;b[i]=y-1;
    }
    vector<int> xs;
    for(int i=0;i<n;i++)xs.push_back(b[i]);
    sort(xs.begin(),xs.end());
    xs.erase(unique(xs.begin(),xs.end()),xs.end());
    for(int i=0;i<n;i++)b[i]=lower_bound(xs.begin(),xs.end(),b[i])-xs.begin();

    vector<int> ys;
    for(int i=0;i<n;i++)ys.push_back(a[i]);
    sort(ys.begin(),ys.end());
    ys.erase(unique(ys.begin(),ys.end()),ys.end());
    for(int i=0;i<n;i++)a[i]=lower_bound(ys.begin(),ys.end(),a[i])-ys.begin();

    for(int i=0;i<n;i++){
        cout<<a[i]+1<<" "<<b[i]+1<<endl;
    }

}
