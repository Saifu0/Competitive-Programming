#include<bits/stdc++.h>
using namespace std;

vector<int> repeat_and_missing(vector<int>&a){
	int n = a.size();
	int sum = (n*(n+1))/2;
	int prod = 1;
	for(int i=0;i<n;i++) prod *= a[i];

	int x = 
}

int main(){
	int n; cin >> n;
	vector<int> a(n);

	for(int i=0;i<n;i++) cin >> a[i];

	vector<int> ans = repeat_and_missing(a);

	cout << ans[0] << " " << ans[1] << endl;
}