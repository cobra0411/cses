#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll> vt(n,0);
    for(ll i=0;i<n;i++){
        cin>>vt[i];
    }
    ll result=0;
    for(ll i=1;i<n;i++){
        result+=max(0ll,vt[i-1]-vt[i]);
        if(vt[i]<vt[i-1]){
            vt[i]=vt[i-1];
        }
    }
    cout<<result<<endl;
    return 0;
}