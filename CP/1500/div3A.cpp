#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007


int main(){
	NINJA;
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(n==1 || n==2){
			cout << 0 << endl;
			continue;
		}
		if(n%2){
			cout << n/2 << endl;
		}else{
			cout << n/2-1 << endl;
 		}
	}

	return 0;
}