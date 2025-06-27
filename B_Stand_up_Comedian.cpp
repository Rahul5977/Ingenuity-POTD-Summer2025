#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while (t--){
        vector<int>v(4);
        for(int i=0;i<4;i++) cin>>v[i];
        int alice=0,bob=0;
        alice+=v[0];
        bob+=v[0];
        if(v[0]==0) {
            cout<<1<<endl;
        }else {
            cout<<v[0]+min(v[1],v[2])*2+min(v[0]+1, abs(v[1]-v[2])+v[3])<<endl;
        }

    }

}