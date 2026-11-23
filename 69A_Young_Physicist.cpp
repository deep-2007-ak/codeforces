#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][3];
    int total[3] = {0, 0, 0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin>>a[i][j];
            total[j] += a[i][j];
        }
    }
    if(total[0] == 0 && total[1] == 0 && total[2] == 0) cout<<"YES";
    else cout<<"NO";
}
