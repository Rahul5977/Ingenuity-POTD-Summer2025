#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int>mx(n);
        mx[0]=a[0];
        for(int i=1;i<n;i++) mx[i]=max(mx[i-1],a[i]);

        long long sum=0;
        for(int i=n-1;i>=0;i--){
            long long num;
            if(i==0)num=max(0,a[i]);
            else num=max(mx[i-1],a[i]);
            cout<<num+sum<<" ";
            sum+=a[i];
        }
        cout<<endl;
        

        

    }


}