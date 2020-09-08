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
		int x;
		int n,m;
		cin >> x >> n >> m;

	
		int need = m*10;

		if(x<=need){
			cout << "YES" << endl;
			continue;
		}

		while(n!=0){
			x = floor(x/2) +10;
			n--;
			if(x<=need){
				x = x-need;
				break;
			}
		}

 	//	cout << x << endl;
 		if(x<=0) cout << "YES" << endl;
 		else cout << "NO" << endl;
	}

	return 0;
}