#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<long long>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        long long ans=0;
        int len=0;
        for(int i=0;i<n;i++){
            if(a[i]<=q) len++;
            else{
                len=0;
            }
            ans+=max(len-k+1,0);
        }
        cout<<ans<<endl;


    }

}