#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N, S;
		cin >> N >> S;
		int*A = new int[N];
		for (int i = 0; i < N; i++) {
			cin >> A[i];
		}
		int flag = 0;
		int start, end;

		for (int i = 0; i < N; i++) {
			if (flag == 0) {
				int   sum = A[i];
				if (sum == S) {
					start = i;
					end = i;
					flag = 1;
					break;
				}
				for (int j = i + 1; j < N; j++) {
					sum += A[j];
					if (sum == S) {
						start = i;
						end = j;
						flag = 1;
					}
					else if (sum > S) break;
					else continue;

				}
			}
			else break;
		}
		if (flag != 0)cout << start + 1 << " " << end + 1 << endl;
		else cout << "-1" << endl;
	}
	return 0;
}