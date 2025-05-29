#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long x;
        cin>>n>>x;
        vector<int>a(n);
        long long totSum=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            totSum+=a[i];
        } 
        long long maxSum=0,minSum=0;
        //calculating maxSum;
        for(int i=0;i<n;i++){
            maxSum+=a[i]/x;
            if(a[i]%x!=0) maxSum++;
        }
        //calculating minSum
        minSum=(totSum/x);
        if(totSum%x!=0) minSum++;
        cout<<minSum<<" "<<maxSum<<endl;
        


    }

}