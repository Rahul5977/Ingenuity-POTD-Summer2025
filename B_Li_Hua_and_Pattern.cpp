#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<vector<int>> arr(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }

        int diff = 0, p = n;
        for (int i = 0; i < ceil(n / 2.0); i++) {
            if (n % 2 != 0 && i == n / 2)
                p /= 2;
            for (int j = 0; j < p; j++) {
                if (arr[i][j] != arr[n - i - 1][n - j - 1]) {
                    diff++;
                }
            }
        }

        if ((diff == 0 && n == 1) || (diff % 2 == k % 2 && k >= diff) || (n % 2 != 0 && k >= diff)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}