#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    
    if(n*(n+1)%4){
        cout<<"NO"<<endl;
        return 0;
    }
    
    set<ll> s1;
    set<ll> s2;
    ll sum=0;
    ll ok=n*(n+1)/4;
    
    ll i=1;
    
    if(ok%n==0){
        s1.insert(n);
        sum+=n;
        n--;
    }
    while(sum<ok){
        s1.insert(i);
        s1.insert(n);
        i++;
        n--;
        sum+=i;
        sum+=n;
    }
    while(i<=n){
        s2.insert(i);
        s2.insert(n);
        i++;
        n--;
    }
    cout<<"YES"<<endl;
    cout<<s1.size()<<endl;
    for(auto it=s1.begin();it!=s1.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    cout<<s2.size()<<endl;
    for(auto it=s2.begin();it!=s2.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    return 0;
}