//This is a Time Limit Exceeded solution
//Optimization required
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int*A = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> A[i];
		}
		int maxm = A[0];
		int sum = 0;
		for (int i = 0; i <= n - 1; i++) {
			sum += A[i];
			maxm = max(maxm, sum);
			if (sum < 0) sum = 0;
		}
		if (maxm == 0)cout << "-1" << endl;
		else cout << maxm << endl;
	}
	return 0;
}