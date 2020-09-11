#include<bits/stdc++.h>
using namespace std;
int findAns(int*A, int N) {
  sort(A, A + N);
  int count = 0;
  for (int i = N - 1; i >= 0; i--) {
    int j = 0, k = i - 1;
    while (j < k) {
      if (A[i] == A[j] + A[k]) {
        j++;
        k--;
        count++;
      }
      else if (A[i] > A[j] + A[k]) {
        j++;
      } else {
        k--;
      }

    }
  }
  return count;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    int*A = new int[N];
    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }
    int ans = findAns(A, N);
    if (ans == 0) cout << "-1" << endl;
    else cout << ans << endl;
  }




  return 0;
}