#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int c = 1;
    char x = s[0];
    for(int i = 1; i < s.size(); i++){
        if(x == s[i]) c++;
        else{
            x = s[i];
            c = 1;
        }
        if(c == 7){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
