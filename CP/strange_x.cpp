#include<bits/stdc++.h>
using namespace std;


const int mxn = 1e4+5;

int main(){
	

	

	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int tot = 0;
		while(n%2==0){
			tot++;
			n = n/2;
		}
		for(int i=3;i<=sqrt(n);i=i+2){
			while(n%i==0){
				tot++;
				n = n/i;
			}
		}
		if(n>2) tot++;
		
		if(tot<k) cout << 0 << endl;
		else cout << 1 << endl;
	}

	return 0;
}

