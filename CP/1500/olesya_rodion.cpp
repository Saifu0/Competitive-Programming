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

	int n,t; cin >> n >> t;
	if(t==10){
		if(n==1){
			puts("-1");
			return 0;
		}	
		else{
			fo(i,n-1)cout << "1";
			cout << "0";
			return 0;
		}
	}

	fo(i,n) cout << t;

	return 0;
}