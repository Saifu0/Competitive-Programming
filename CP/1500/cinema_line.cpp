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


const int mxn  =123;
int m[mxn];

int main(){
	NINJA;
	int n; cin >> n;
	int a[n];
	fo(i,n) cin >> a[i];
	int ok=1;
	fo(i,n){
		if(a[i]==25){
			m[25]++;
		}else if(a[i]==50){
			m[50]++;
			m[25]--;
		}else if(a[i]==100){
			if(m[50]>0){
				m[25]--;
				m[50]--;
			}else m[25] -= 3;
		}
		if(m[25]<0 || m[50]<0) ok = 0;
	}
	if(ok) cout << "YES" << endl;
	else cout << "NO" << endl;


	return 0;
}