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
		int n; cin >> n;
		int p=0,c=0;
		int no=0;
		fo(i,n){
			int a,b; cin >> a >> b;
			if(a<p||b<c||(a-p)<(b-c)) no=1;
			p = a;
			c = b;
		}
		if(no) cout << "NO" << endl;
		else cout << "YES" << endl;
	}

	return 0;
}