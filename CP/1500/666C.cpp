#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	int n; cin >> n;
	vector<int> a(n);

	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	if(n==1){
		for(int i=0;i<3;i++){
			cout << "1 1" << endl;
			cout << -a[0] << endl;
			a[0] = 0;
		}
		return 0;
	}

	cout << "1 " << n << endl;

	for(int i=0;i<n-1;i++) cout << -a[i]*n << " ";
	cout << "0\n";

	cout << "1 " << n-1 << endl;

	for(int i=0;i<n-1;i++) cout << (n-1)*a[i] << " ";
	cout << endl;


	cout << n << " " << n << endl;
	//cout << -a[n-1] << endl;
}

