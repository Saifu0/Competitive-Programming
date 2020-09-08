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

	int n; cin >> n;

	vector<ll> a(n);
	ll sum = 0;
	fo(i,n){
		cin >> a[i];
		sum += a[i];
	}

	

	if(sum%2==0){
		cout << sum << endl;
		return 0;
	}

	sort(a.begin(), a.end());

	fo(i,n){
		if(a[i]%2){
			cout << sum - a[i] << endl;
			return 0;
		}
	}

	return 0;
}