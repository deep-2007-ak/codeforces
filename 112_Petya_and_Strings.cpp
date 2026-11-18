#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string a, b;
    cin>>a>>b;
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    int ans = 0;
    while(i < n1 && j < n2){
        a[i] = toupper(a[i]);
        b[i] = toupper(b[j]);
        if(a[i] > b[j]){
            ans = 1;
            break;
        }
        else if(a[i] < b[j]){
            ans = -1;
            break;
        }
        i++;
        j++;
    }
    cout<<ans;
    return 0;
}
