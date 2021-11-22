#include"bits/stdc++.h"
using namespace std;
const long long INF = 1LL << 60;

/*

長さ N の数列 a,b が与えられる。
ai×bj の計算で現れた N2 個の値を昇順で並べたときの K 番目にある値は何か。
1≤N≤30000
1≤K≤N2
1≤ai≤109
1≤bj≤109

愚直に計算すると,O(N^2logN^2)となって間に合わない
そこで答えとなるXを決め打ちする(二分探索)

XがK番目に小さい値である
⇒X以下の値がK個以上
これを二分探索の判定条件にする

次に,どうやって個数を数えるか
積がX以下である⇒ai*bj<=X つまり bj<=X/ai
と書くことができる.この個数も二分探索で求めることができる




*/

int main(void) {
	long long N,K;
	cin >> N>>K;
	vector<long long> a(N),b(N);
	for (long long i = 0; i < N; i++)cin >> a[i];
	for (long long i = 0; i < N; i++)cin >> b[i];
	sort(b.begin(), b.end());
	long long left = 0;
	long long right = INF;
	while (right - left > 1) {
		long long mid = (right + left) / 2;
		long long cnt = 0;
		for (int i = 0; i < N; i++) {
			cnt+=upper_bound(b.begin(), b.end(), mid / a[i])-b.begin();
		}
		if (cnt >= K) {
			right = mid;
		}
		else {
			left = mid;
		}
	}
	cout << right << endl;

}