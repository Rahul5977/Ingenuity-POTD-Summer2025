#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int x=a[0];
        sort(a.begin(),a.end());
        if(a[0]==x) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }

}