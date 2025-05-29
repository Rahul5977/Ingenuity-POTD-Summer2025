#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        map<long long, int> freq;
        long long sum = 0;
        int count = 0;

        for(int i = 0; i < n; i++){
            sum += a[i];
            freq[a[i]]++;

            if(sum % 2 == 0){
                long long target = sum / 2;
                if(freq.find(target)!=freq.end()) count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
