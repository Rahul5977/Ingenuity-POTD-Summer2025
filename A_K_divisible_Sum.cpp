#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(n<=k) cout<<(k+n-1)/n<<endl;   
        else{
            //we will get n sum by putting 1 everywhere 
            //k<n
            //we need more n%k to add in...
            if(n%k==0) cout<<1<<endl;
            else{
                long long  num=(k-(n%k));
                cout<<1+(num+k-1)/k<<endl;
            }
        }
    }

}