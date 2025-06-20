#include<bits/stdc++.h>

using namespace std;


int main () {
    int t;
    cin>>t;
    while (t--) {
        int n, m, k;
        cin>>n>>m>>k;
        long long jsum = 0, x, jmn = INT_MAX, gmn = INT_MAX, jmx = 0, gmx = 0;
        for (int i = 0; i < n; i++) {
            cin>>x;
            jsum += x;
            jmn = min (jmn, x);
            jmx = max (jmx, x);
        }
        for (int i = 0; i < m; i++) {
            cin>>x;
            gmn = min (gmn, x);
            gmx = max (gmx, x);
        }
        long long ans;
        if (gmx > jmn) {
            ans = jsum - jmn;
            ans += gmx;
        } else {
            ans = jsum;
        }
        if (k == 2) {
            ans -= (max (jmx, gmx));
            ans += min (jmn, gmn);
        } else if (k > 2) {
            if (k % 2 == 0) {
                ans -= (max (jmx, gmx));
                ans += min (jmn, gmn);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}