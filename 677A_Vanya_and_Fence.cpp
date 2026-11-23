#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, h;
    cin>>n>>h;
    int ans = 0;
    while(n--){
        int x;
        cin>>x;
        if(x <= h) ans++;
        else{
            ans += (x / h);
            if(x % h != 0) ans++;
        }
    }
    cout<<ans;
}
