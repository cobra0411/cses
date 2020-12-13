#include<bits/stdc++.h>
#define ll long long
ll mod = 1e9+7;

using namespace std;
ll result=0;

bool check(vector<string> &vt,ll i,ll j){
    
    for(ll k=1;k<=i;k++){
        if(vt[i-k][j]=='#'){
            return false;
        }
        if(j-k>=0){
            if(vt[i-k][j-k]=='#'){
                return false;
            }
        }
        if(j+k<8){
            if(vt[i-k][j+k]=='#'){
                return false;
            }
        }
    }
    return true;
}

void solve(vector<string> vt,ll i){
    //cout<<i<<endl;
    if(i==8){
        result++;
        return;
    }
    
    for(ll j=0;j<vt[i].size();j++){
        if(vt[i][j]=='.' && check(vt,i,j)){
            vt[i][j]='#';
            solve(vt,i+1);
            vt[i][j]='.';
            
        }
    }
    return;
}





int main(){
    ll n=8;
    vector<string> vt(n);
    for(ll i=0;i<n;i++){
        cin>>vt[i];
    }
    solve(vt,0);
    cout<<result<<endl;
    return 0;
}
