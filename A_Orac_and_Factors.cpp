#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%2==0){
            cout<<n+(2*k)<<endl;
        }else {
            //find first divisor
            int div=2;
            for(int i=2;i<=n;i++){
                if(n%i==0){
                    div=i;
                    break;
                }
            }
            cout<<n+div+(2*(k-1))<<endl;
        }
    }
}