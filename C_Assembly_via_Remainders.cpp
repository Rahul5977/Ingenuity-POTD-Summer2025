#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>x(n-1);
        for(int i=0;i<n-1;i++) cin>>x[i];
        vector<long long>a(n);
        a[0]=502;
        for(int i=0;i<n-1;i++){
            a[i+1]=a[i]+x[i];
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;


    }

}