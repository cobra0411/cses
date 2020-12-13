#include<bits/stdc++.h>
#define ll long long
ll mod = 1e9+7;

using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        
        // 2x+y=a
        // x+2*y=b
        // y=(2*b-a)/3
        // x=(2*a-b)/3
        
        int y=(2*b-a)/3;
        int x=(2*a-b)/3;
        
        if(x>=0 and y>=0 and 2*x+y==a and x+2*y==b ){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}