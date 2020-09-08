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

set<string> a;
string s; 


void solve(int l, int r){
	if(l==r) a.insert(s);
	else{
		for(int i=l;i<=r;i++){
			swap(s[l],s[i]);

			solve(l+1,r);

			swap(s[l],s[i]);
		}
	}
}

int main(){
	NINJA;

	cin >> s;
	int n = sz(s);

	solve(0,n-1);

	cout << a.size() << endl;

	for(auto i : a) cout << i << endl;

	return 0;
}