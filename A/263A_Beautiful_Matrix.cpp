#include<iostream>
using namespace std;

int main(){
    int a[5][5];
    int si, sj, total = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin>>a[i][j];
            if(a[i][j] != 0){
                si = i;
                sj = j;
            }
        }
    }
    if(si>2) total += si - 2;
    else if(si < 2) total += 2 - si;

    if(sj>2) total += sj - 2;
    else if(sj < 2) total += 2 - sj;

    cout<<total;
    return 0;
}
