#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans;
    string v ="aeiouyAEIOUY";
    for(int i = 0; i < s.size(); i++){
        if(v.find(s[i]) == string::npos){
            ans = ans + '.';
            s[i] = tolower(s[i]);
            ans = ans + s[i];
        }
    }
    cout<<ans;
}
