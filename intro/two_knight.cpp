#include<bits/stdc++.h>
#define ll long long
ll mod = 1e9+7;

using namespace std;

int main(){
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        
        ll temp=max(0ll,4*(i-2)*(i-1));
        
        ll ok=i*i;
        ll total=ok*(ok-1)/2;
        
        total-=temp;
        cout<<max(0ll,total)<<endl;
    }
    return 0;
}