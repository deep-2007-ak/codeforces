#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    unordered_map<string, int> s;
    int n;
    cin>>n;
    while(n--){
        string x;
        cin>>x;
        int &c = s[x];
        if(c == 0){
            cout<<"OK"<<endl;
            c++;
        }
        else{
            while(s.count(x + to_string(c))) c++;
            string y = x + to_string(c);
            cout<<y<<endl;
            s[y] = 1;
            c++;
        }
    }
}
