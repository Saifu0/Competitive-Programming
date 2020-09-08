#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

int32_t main(){
	NINJA;
		
	int n; cin >> n;
	int a[n+1];
	
	fo(i,n){
		cin >> a[i];
		while(a[i]%2==0) a[i] /= 2;
		while(a[i]%3==0) a[i] /= 3;
	}
	
	Fo(i,1,n){
		if(a[i]!=a[0]){
			puts("No");
			return 0;
		}
	}
	
	puts("Yes");

	return 0;
}
 
