#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        bool check=false;
        for(int i=0;i<n-1;i++){
            if(s[i]=='L' && s[i+1]=='R'){
                check=true;
                cout<<i+1<<endl;
                break;
            }else if(s[i]=='R' && s[i+1]=='L'){
                check=true;
                cout<<0<<endl;
                break;
            }
        }
        if(!check) cout<<-1<<endl;
    }
}