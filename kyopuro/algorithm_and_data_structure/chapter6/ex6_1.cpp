#include"bits/stdc++.h"
using namespace std;

const long long INF = 1LL << 60;

int main(void) {
	long long N;
	cin >> N;

	vector<long long> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	auto b = a;
	sort(b.begin(), b.end());

	vector<long long> res(N);
	for (int i = 0; i < N; i++) {
		res[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
	}

	for (int i = 0; i < N; i++) {
		cout << res[i] << endl;
	}
}