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

vector<bool> Eratosthenes(ll N) {
    vector<bool> isprime(N+1, true);
    isprime[0] = isprime[1] = false;
    for (ll p = 2; p <= N; ++p) {
        if (!isprime[p]) continue;
        for (ll q = p * 2; q <= N; q += p) {
            isprime[q] = false;
        }
    }
    // 1 以上 N 以下の整数が素数かどうか
    return isprime;
}

const long long INF=1LL<<60;

int main(void){
    ll n;
    cin>>n;
    vector<bool> isprimenumber=Eratosthenes(1000100);
    vector<ll> sum(1000010,0);
    for(int i=1;i<=1000000;i++){
        if(isprimenumber[i])sum[i]=sum[i-1]+1;
        else sum[i]=sum[i-1];
    }
    ll ans=0;
    for(ll i=0;i<=1000000;i++){
        if(isprimenumber[i]){
            ans+=sum[min(i-1,n/(i*i*i))];
        }
    }
    cout<<ans<<endl;
}
