#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_set<char> uniq;
    int total = 0;
    for(char i : s){
        if(!uniq.contains(i)){
            total++;
            uniq.insert(i);
        }
    }
    if(total % 2 == 1) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    return 0;
}
