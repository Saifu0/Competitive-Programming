#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>&a){
	int n = a.size();
	int zero=0,one=0,two=0;
	for(int i=0;i<n;i++){
		zero += (a[i]==0) ? 1 : 0;
		one += (a[i]==1) ? 1 : 0;
		two += (a[i]==2) ? 1 : 0; 
	}
	for(int i=0;i<zero;i++) a[i] = 0;
	for(int j=zero;j<(zero+one);j++) a[j] = 1;
	for(int k=(zero+one);k<(zero+one+two);k++) a[k] = 2;

}

void sortColors2(vector<int>&a){
	int n = a.size();
	int i=0,j=n-1;
	for(int k=0;k<=j;){
		if(a[k]==0) swap(a[i++],a[k++]);
		else if(a[k]==2) swap(a[k],a[j--]);
		else k++;
	}
}

int main(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++) cin >> a[i];

	sortColors2(a);

	for(int i:a) cout << i << " ";
	cout << endl;

	return 0;
}