#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        long double result = (long double)n / a;
        long long intPart = (long long)result;
        long double fracPart = result - intPart;

        if (a > b) {
            cout << "1" << endl;
        } else {
            if (fracPart > 0) {
                cout << (long long)ceil(result) << endl;
            } else {
                cout << intPart << endl;
            }
        }
    }

    return 0;
}
