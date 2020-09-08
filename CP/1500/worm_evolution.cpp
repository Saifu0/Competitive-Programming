#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

int32_t main(){
	NINJA;

	int n; cin >> n;
	int ans = 1;
	int a[n];
	int x,y,z;

	fo(i,n) cin >> a[i];

	fo(i,n){
		Fo(j,0,n){
			Fo(k,0,n){
				if(a[i]==(a[j]+a[k]) && (j!=k)){
					ans = 0;
					x=i+1;
					y=j+1;
					z=k+1;
				}
			}
		}
	}

	if(ans) cout << -1 << endl;
	else cout << x << " " << y << " " << z << endl;
	
	return 0;
} 