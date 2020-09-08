#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

int main(){

	int t; cin >> t;
	while(t--){

		priority_queue<int> q;
		int n; cin >> n;

		for(int i=0;i<n;i++){
			int x; cin >> x;
			q.push(x);
		}

		while(q.size()>1){

			int a = q.top();
			q.pop();

			int b = q.top();
			q.pop();

			int calc = ((a*3)-(b*2))%mod;

			q.push(calc);
		}

		cout << q.top() << endl;

	}

	return 0;
}