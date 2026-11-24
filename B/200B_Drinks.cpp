#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double x;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int j;
        cin>>j;
        x += j;
    }
    cout<<fixed<<setprecision(12)<<(double)x/n;
}
