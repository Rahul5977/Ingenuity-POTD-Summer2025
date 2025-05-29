#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>ans(n);
        if(x<n){
            ans[n-1]=x;
            int count=0;
            int i=0;
            while(i<n-1){
                if(count==x){
                    count++;
                    continue;
                }
                ans[i++]=count;
                count++;
            }
        }
        else if(x==n){
            for(int i=0;i<n;i++){
                ans[i]=i;
            }
        }
        //printing ans
        for(auto ele:ans){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}