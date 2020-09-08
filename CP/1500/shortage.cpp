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
	int p; cin >> p;
	int n1; cin >> n1;
	ll a[n1];
	ll s1 = 0;
	fo(i,n1){
		cin >> a[i];
		s1 += a[i];
	}

	ll aa[n1];
	ll s2=0;
	fo(i,n1){
		cin >>aa[i];
		s2 += aa[i];
	}

	int n2; cin >> n2;
	ll b[n2],bb[n2];
	ll s3=0,s4=0;

	fo(i,n2){
		cin >> b[i]; s3 += b[i];
	}

	fo(i,n2){
		cin >> bb[i]; s4 += b[i];
	}

	if(s1 >p || s2 > p){
		cout << "NO" << endl;
		return 0;
	}

	if((s1-s2) >= (s3-s4)){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}