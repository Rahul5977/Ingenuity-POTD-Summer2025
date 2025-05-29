#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int len;
        for(int i=1;;i++) {
            if(n%i!=0){
                len=i-1;
                break;
            }
        }
        cout<<len<<endl;
    }
}