#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll total=0;
    for(int i=0;i<n-1;i++){
        ll temp;
        cin>>temp;
        total+=temp;
    }
    total-=(n*(n+1)/2);
    cout<<-1*total<<endl;
}