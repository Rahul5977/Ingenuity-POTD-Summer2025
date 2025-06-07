#include <bits/stdc++.h>
using namespace std;

int findMindx(int x,vector<long long >&pref){
    int n=pref.size();

    if (pref[0] >= x) return 1;
    if(pref[n-1]<x) return -1;

    int lo=0,hi=n-1,ans=-1;
    while(lo<=hi){
        int mid=(lo+(hi-lo)/2);
        if(pref[mid]>=x){
            ans=mid;
            hi=mid-1;
        }else lo=mid+1;   
    }
    // int ans=lower_bound(pref.begin(),pref.end(),x)-pref.begin();
    // if(ans==n) return -1;
    return ans+1;


}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end(),greater<int>());
        

        vector<long long>pref(n);
    
        pref[0]=a[0];
        for(int i=1;i<n;i++) pref[i]=pref[i-1]+a[i];

        while(q--){
            long long x;
            cin>>x;
            cout<<findMindx(x,pref)<<endl;
        }
    }

}