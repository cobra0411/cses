#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    if(n<=3ll && n>1ll){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }else{
       for(ll i=2;i<=n;i+=2){
           cout<<i<<" ";
       }
        for(ll i=1;i<=n;i+=2){
            cout<<i<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}