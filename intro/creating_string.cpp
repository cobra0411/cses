#include<bits/stdc++.h>
#define ll long long
ll mod = 1e9+7;

using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    string org=s;
    int result=1;
    int n=s.length();
    while(n){
        result*=n;
        n--;
    }
    vector<int> vt(26,0);
    for(int i=0;i<s.size();i++){
        vt[s[i]-'a']++;
    }
    for(int i=0;i<vt.size();i++){
        while(vt[i]){
            result/=vt[i];
            vt[i]--;
        }
    }
    cout<<result<<endl;
    cout<<s<<endl;
    while(next_permutation(s.begin(),s.end())){
        //next_permutation(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
}
