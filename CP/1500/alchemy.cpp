#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t; cin >> t;
	int __ = 1;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		int a=0,b=0;
		for(char c : s){
			if(c=='A')a++;
			else b++;
		}
		cout << "Case #" << __++ << ": ";
		if(abs(a-b)<=1) cout << 'Y' << endl;
		else cout << 'N' << endl;
	}

	return 0;
}