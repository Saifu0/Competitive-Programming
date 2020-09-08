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

int check(int pattern, vi a, int n){
	int count = 0;

	fo(i,n) if((pattern&a[i])==pattern) count++;
	return count; 
}


int main(){
	NINJA;
	int n; cin >> n;
	vi a(n);

	fo(i,n) cin >> a[i];

	int res = 0, count;

	for(int i=31;i>=0;i--){
		count = check(res|(1<<i),a,n);

		if(count>=2) res |= (1<<i);
	}

	cout << res << endl;

	return 0;
}