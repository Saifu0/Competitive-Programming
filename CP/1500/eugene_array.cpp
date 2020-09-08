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
	int n,q; cin >> n >> q;

	int a=0,b=0;
	fo(i,n){
		int x; cin >> x;
		if(x==1) a++;
		else b++;
	}

	while(q--){
		int l,r; cin >> l >> r;
		int len = r - l + 1;

		if((len&1) or (a<len/2) or (b<len/2)) cout << 0 << endl;
		else cout << 1 << endl;
	}

	return 0;
}