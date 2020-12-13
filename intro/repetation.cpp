#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s;
    cin>>s;
    int count=1;
    int result=1;
    for(int i=1;i<s.length();i++){
        if(s[i]!=s[i-1]){
            count=1;
        }else{
            count++;
        }
        result=max(result,count);
    }
    cout<<result<<endl;
    return 0;
}