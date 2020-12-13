#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    
    ll p=5;
    ll total=0;
    while(p<=n){
        total+=(n/p);
        p=p*5;
    }
    cout<<total<<endl;
    return 0;
}