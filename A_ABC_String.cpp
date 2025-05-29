#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    stack<char> st;
    for (char c : s){
        if (c=='(') st.push(c);
        else{
            if (st.empty()) return false;
            else if (st.top()+1==c) st.pop();
            else return false;    
        }
    }
    return st.empty();
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n=str.size();
        string b;
        if(str[0]==str[n-1]){
            cout<<"NO"<<endl;
            continue;
        }
        char ch1=str[0];
        int countOB=0;
        char ch2=str[n-1];
        int countCB=0;
        for(int i=0;i<n;i++){
            if(str[i]==ch1){
                b+='(';
                countOB++;
            }else if(str[i]==ch2){
                b+=')';
                countCB++;
            }else {
                b+='-';  
            }
        }
        int rem=n-(countCB+countOB);
        if(countOB>countCB){
            // we need clossing bracket 
            for(int i=0;i<n;i++){
                if(b[i]=='-') b[i]=')';
            }
        }else if(countCB> countOB){
            // we need opnening brackets
            for(int i=0;i<n;i++){
                if(b[i]=='-') b[i]='(';
            }
        }
        if(isValid(b)){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;


    }

}