#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        vector<vector<char>>v(n,vector<char>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<n/2;i++){
            for(int j=i;j<n-1-i;j++){
                int a=v[i][j];
                int b=v[j][n-1-i];
                int c=v[n-1-i][n-1-j];
                int d=v[n-1-j][i];
                int count_1=(a=='1')+(b=='1')+(c=='1')+(d=='1');
                int count_0=4-count_1;
                ans+=min(count_0,count_1);
            }
        }
        cout<<ans<<endl;

    }

}