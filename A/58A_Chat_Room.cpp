#include <iostream>
using namespace std;

int main(){
    string x = "hello";
    string s;
    cin>>s;
    int j = 0;
    for(int i = 0; i < s.size(); i++){
        if(j < 5 && x[j] == s[i]) j++;
    }
    if(j == 5) cout<<"YES";
    else cout<<"NO";
}
