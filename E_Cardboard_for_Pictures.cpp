#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n,c;
        cin>>n>>c;
        vector<int>s(n);
        for(int i=0;i<n;i++) cin>>s[i];

        for(int i=0;i<n;i++){
            c-=(s[i]*s[i]);
        }

        c/=(4*n);
        int tot=accumulate(s.begin(),s.end(),0);
        tot/=(2*n);
        cout<<(long long)sqrtl(tot*tot+c)-tot<<endl;


    }

}