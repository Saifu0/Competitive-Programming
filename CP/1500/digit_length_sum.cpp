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

	int m,s; cin >> m >> s;

	if(s==0){
		if(m==1) cout << "0 0" << endl;
		else cout << "-1 -1" << endl;
		return 0;
	}

	string a,b;

	fo(i,m){
		int t = min(s,9);
		b += t + '0';
		s -= t;
	}

	if(s>0){
		cout << "-1 -1" << endl; 
		return 0;
	}

	for(int i=m-1;i>=0;i--){
		a += b[i];
	}

	//cout << a << " " << b << endl;

	int i;	
	for(i=0;a[i]=='0';i++);

	a[i]--; a[0]++;

	cout << a << " " << b << endl;

	return 0;
}