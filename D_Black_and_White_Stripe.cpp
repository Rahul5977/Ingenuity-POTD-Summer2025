#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>white(n);

        white[0]=(s[0]=='W') ? 1:0;
        for(int i=1;i<n;i++){
            if(s[i]=='B'){
                white[i]=white[i-1];
            }else{
                white[i]=white[i-1]+1;
            }
        }
        int i=0,j=k-1;
        int ans=INT_MAX;
        while(j<n){
            int diff;
            if(i==0){
                 diff=white[j];
            }
            else diff=white[j]-white[i-1];
            ans=min(ans,diff);
            i++;
            j++;
        }
        cout<<ans<<endl;
    }

}