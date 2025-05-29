#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        long long countZeros=0,countOnes=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0) countZeros++;
            if(a[i]==1) countOnes++;
        }
        cout<<countOnes*(long long)(pow(2,countZeros))<<endl;
    }

}