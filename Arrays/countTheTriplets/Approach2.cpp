using namespace std;
int findAns(int*A, int N) {
    int count = 0;
    unordered_map<int, bool>m;
    for (int i = 0; i < N; i++) {
        m[A[i]] = true;
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (m.count(A[i] + A[j]) > 0)
            {
                count++;
                m[A[i] + A[j]] = false;
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