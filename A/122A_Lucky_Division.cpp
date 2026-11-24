#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> n = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int x;
    cin>>x;
    for(int i = 0; i < n.size(); i++){
        if(x % n[i] == 0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
