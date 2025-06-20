#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        int n=s.size();
        if(s.size()==1){
            cout<<-1<<endl;

            continue;
        }
        bool output=false;
        string eveLenght="";
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                eveLenght = string(1, s[i]) + s[i+1];
                cout<<eveLenght<<endl;
                output=true;
                break;
                
            }
        }
        string oddLength="";
        if(!output){
            for(int i=0;i<n-2;i++){
            string str=s.substr(i,3);
            if(str[0]!=str[1] && str[1]!=str[2] &&  str[2]!=str[0]){
                oddLength=(str);
                cout<<oddLength<<endl;
                output=true;

                break;
                
            }
        }
        }
        if(!output)cout<<-1<<endl;
    }

}