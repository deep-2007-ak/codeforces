#include<iostream>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int t = a[k-1];
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > 0 && a[i] >= t ) sum++;
    }
    cout<<sum;
    return 0;
}
