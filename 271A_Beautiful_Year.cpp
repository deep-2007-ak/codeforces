#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = n + 1; i <= 9500; i++){
        int x = i;
        int x1 = x % 10; x /= 10;
        int x2 = x % 10; x /= 10;
        int x3 = x % 10; x /= 10;
        int x4 = x % 10; 
        if(x1 == x2 || x1 == x3 || x1 == x4 || x2 == x3 || x2 == x4 || x3 == x4) continue;
        else{
            cout<<i;
            return 0;
        }
    }
}
