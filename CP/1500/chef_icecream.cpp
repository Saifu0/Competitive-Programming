// #include<bits/stdc++.h>
// using namespace std;



// int32_t main(){
	

// 	int t; cin >> t;
// 	while(t--){
// 		int n; cin >> n;
		
// 		bool f = 0;
// 		int five = 0, ten =0;

// 		for(int i=0;i<n;i++){
// 			int x; cin >> x;
// 			if(x==5) five++;
// 			else if(x==10){
// 				if(five>0) five--, ten++;
// 				else{
// 					f = 1;
// 					// break;
// 				}
// 			}else if(x==15){
// 				if(ten>0) ten--;
// 				else if(five>1) five -= 2;
// 				else{
// 					f = 1;
// 					// break;
// 				}
// 			}
// 		}

		

// 		if(f) cout << "NO" << endl;
// 		else cout << "YES" << endl;
// 	}
	
// 	return 0;
// }

#include <iostream>
using namespace std;

#define ll long long

const int N = 1e3+10;
int a[N];

int main() {
	// your code goes here
	
	int _;
	cin >> _;
	while(_--){
	    int n; cin >> n;
	    for(int i=0;i<n;i++)
	        cin >> a[i];
	        
        bool flag = true;
	        
        int z=0,o=0;
        for(int i=0;i<n;i++){
            if(a[i]==5) z++;
            else if(a[i]==10){
                if(z>0) z--,o++;
                else{
                    flag = false;
                    break;
                }
            }else if(a[i]==15){
                if(o>0) o--;
                else if(z>1) z-=2;
                else{
                    flag = false;
                    break;
                }
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
	}
	return 0;
}
