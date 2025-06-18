#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(x==1 && k==2){
            cout<<"YES"<<endl;
            continue;
        }
        if(k>=2){
            cout<<"NO"<<endl;
            continue;
        }
           
        if(k==1) {
            check(x) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        }

        
    }

}