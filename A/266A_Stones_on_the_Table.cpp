#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    char a;
    char prev = ' ';
    int count = 0;
    for(int i = 0; i < x; i++){
        cin>>a;
        if(a == prev) count++;
        prev = a;
    }
    cout<<count;
}
