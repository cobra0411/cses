#include<bits/stdc++.h>
#define ll long long
ll mod = 1e9+7;

using namespace std;
int main(){
    ll n;
    cin>>n;
    vector<ll> vt(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>vt[i];
        sum+=vt[i];
    }
    ll result=INT_MAX;
    
    for(ll i=1;i<(1<<n)-1;i++){
        ll ok=0;
        ll temp=i;
        int j=0;
        while(temp){
           if(temp&1){
                ok+=vt[j];
            }
            temp>>=1;
            j++;
        }
        //cout<<sum<<" "<<ok<<endl;
        result=min(result,abs(sum-ok-ok));
    }
    if(result==INT_MAX){
        cout<<vt[0]<<endl;
        return 0;
    }
    cout<<result<<endl;
    
    return 0;
}
