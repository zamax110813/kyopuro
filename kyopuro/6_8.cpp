#include<bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

int main(void) {
	int N;
	cin >> N;
	vector<long long> H(N),S(N);
	for (int i = 0; i < N; i++) {
		cin >> H[i] >> S[i];
	}

	long long left = 0;
	long long right = INF;
	while (right - left > 1) {
		long long mid = (right+left) / 2;
		bool ok = true;
		vector<long long> t(N);
		for (int i = 0; i < N; i++) {
			if (H[i] > mid)ok = false;
			else t[i] = (mid - H[i]) / S[i];
		}
		sort(t.begin(), t.end());
		for (int i = 0; i < N; i++) {
			if (t[i] < i)ok = false;
		}
		if (ok)right = mid;
		else left = mid;
	}
	cout << right << endl;

}