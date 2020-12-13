#include<bits/stdc++.h>
#define ll long long
ll mod = 1e9+7;

using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        
        ll base=max(x-1,y-1)*max(x-1,y-1);
        ll ok=max(x,y);
        if(ok%2){
            if(ok-x>0){
                base+=(y+ok-x);
            }else{
                base+=y;
            }
            
        }else{
            if(ok-y>0){
                base+=(x+ok-y);
            }else{
                base+=x;
            }
        }
        cout<<base<<endl;
    }
    return 0;
}