#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        if(n==1) {
            cout<<1<<endl;
            continue;
        }
        if(n%2!=0) {
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                a[i]=n-i;
            }else a[i]=i;
        }

        for(auto ele:a) cout<<ele<<" ";
        cout<<endl;
    }

}