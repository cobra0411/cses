#include<bits/stdc++.h>
#define ll long long
ll mod = 1e9+7;

using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> vt(26,0);
    
    for(int i=0;i<s.length();i++){
        vt[s[i]-'A']++;
    }
    string fr="",se="",mid="";
    
    for(int i=0;i<vt.size();i++){
        fr+=string(vt[i]/2,'A'+i);
        se=string (vt[i]/2,'A'+i)+se;
        
        if(vt[i]%2){
            mid+=string(1,'A'+i);
        }
    }
    string result;
    if(mid.size()>1){
        cout<<"NO SOLUTION"<<endl;
    }else{
        cout<<fr+mid+se<<endl;
    }
    return 0;
}
