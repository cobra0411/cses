#include<bits/stdc++.h>
#define ll long long
ll mod = 1e9+7;

using namespace std;

int main(){
    ll n;
    cin>>n;
    ll result=1;
    while(n--){
        result*=2ll;
        result%=mod;
    }
    cout<<result<<endl;
    return 0;
}