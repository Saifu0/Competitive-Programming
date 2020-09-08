#include<bits/stdc++.h>
using namespace std;

const int mxn = 1e5+10;
int a[mxn];

int main(){
	int n,x; cin >> n >> x;

	for(int i=0;i<n;i++) cin >> a[i];

	sort(a,a+n);

	int ans =0 ;
	
	int l=0,r=n-1;
	while(l<r){
		if(a[l]+a[r]<x){
			ans += r-l;
			l++;
		}else{
			r--;
		}
	}
	
	cout << ans << endl;
}

