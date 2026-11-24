#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <climits>
using namespace std;

int main(){
    int n, l;
    cin>>n>>l;
    vector<int> v = {0,l};
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    double ans = INT_MIN;
    for(int i = 0; i + 1 < v.size(); i++){
        double y;
        if(i == 0 || i == v.size() - 2) y = abs(v[i] - v[i + 1]);
        else y = abs(v[i] - v[i+1]) / 2.0;
        if(y > ans) ans = y;
    }
    cout<<fixed<<setprecision(10)<<ans;
}
