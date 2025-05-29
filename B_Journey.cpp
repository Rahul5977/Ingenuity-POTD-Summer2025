#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int sum=a+b+c;
    int days=3*(n/sum);
    int remKM=(n%sum);
    n=remKM;
    if(n==0) {
        cout<<days<<endl;
        return;    
    }
    else if(n<=a){
        cout<<days+1<<endl;
        return;
    }else if(n<=a+b){
        cout<<days+2<<endl;
        return;
    }else{
        cout<<days+3<<endl;
        return;
    }
}
int main(){
    
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}