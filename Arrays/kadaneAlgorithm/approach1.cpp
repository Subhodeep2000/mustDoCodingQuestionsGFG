//This code is having time complexity O(n^3)
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
		int maxm = INT_MIN;
		for (int i = 0; i <= n - 1; i++) {
			for (int j = 0; j <= n - i - 1; j++) {
				int sum = 0;

				for (int k = i; k <= j; k++) {
					sum += A[k];
					if (maxm < sum) {
						maxm = sum;
					}
				}
			}
		}
		cout << maxm << endl;
	}
	return 0;
}