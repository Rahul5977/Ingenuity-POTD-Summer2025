#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        int mx=0,cnt=0;
        s+=s;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                cnt=0;
                while(s[i]!='g' && i<s.size()){
                    cnt++;
                    i++;
                }
                mx=max(mx,cnt);
            }
        }
        cout<<mx<<endl;


    }

}