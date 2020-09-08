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

	ll n; cin >> n;

	unsigned ll sum = n*(n+1)/2;

	if(sum%2){
		cout << "NO" << endl;
		return 0;
	}

	unsigned ll need=sum/2;

	set<int> s1,s2;

	while(n!=0){
		if(need>=n){
			s1.insert(n);
			need -= n;
		}else{
			s2.insert(n);
		}
		n--;
	}

	cout << "YES" << endl;
	cout << s1.size() << endl;
	for(int i : s1) cout << i << " ";
	cout << endl << s2.size() << endl;
	for(int i : s2) cout << i << " ";

	return 0;
}