#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        if(n<=4){
            cout<<-1<<endl;
            continue;
        }
        vector<int>ans(n);
        if(n%2!=0){
            ans[n/2]=5;
            ans[n/2 +1]=4;
            int num=1;
            for(int i=0;i<n/2;i++){
                ans[i]=num;
                num+=2;
                if(num==5) num+=2;
            }
            num=2;
            for(int i=n/2+2;i<n;i++){
                ans[i]=num;
                num+=2;
                if(num==4) num+=2;
            }
        }else {
            ans[n/2-1]=5;
            ans[n/2]=4;
            int num=1;
            for(int i=0;i<n/2 -1 ;i++){
                ans[i]=num;
                num+=2;
                if(num==5) num+=2;
            }
            num=2;
            for(int i=n/2+1;i<n;i++){
                ans[i]=num;
                num+=2;
                if(num==4) num+=2;
            }
        }
        for(auto ele: ans){
            cout<<ele<< " ";
        }
        cout<<endl;
    }

}