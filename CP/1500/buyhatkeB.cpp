#include<bits/stdc++.h>
using namespace std;



int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    cout << solve(0,0) << endl;
}