#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int q;
        cin>>q;
        vector<int>a(q);
        for(int i=0;i<q;i++) cin>>a[i];
        vector<int>ans;
        bool flag=false;
        int f=-1;
        int l=-1;
        for(int i=0;i<q;i++){
            if(!flag){
                if(f==-1){
                    ans.push_back(1);
                    f=a[i];
                    l=a[i];
                }else if(a[i]>=l){
                    ans.push_back(1);
                    l=a[i];
                }else if(a[i]<=f){
                    flag=true;
                    l=a[i];
                    ans.push_back(1);
                }else {
                    ans.push_back(0);
                }
            }else {
                if(a[i]<=f&& a[i]>=l){
                    ans.push_back(1);
                    l=a[i];
                }else {
                    ans.push_back(0);
                }
            }
        }
        for(auto ele: ans) cout<<ele;
        cout<<endl;
    }

}