#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int uc = 0, lc = 0;
    for(char c:s){
        if(isupper(c)) uc++;
        else if(islower(c)) lc++;
    }
    for(char &c:s){
        if(lc >= uc) c = tolower(c);
        else c = toupper(c);
    }
    cout<<s;
}
