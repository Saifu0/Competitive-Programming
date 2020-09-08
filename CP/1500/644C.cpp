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

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[55];

		int e=0,o=0;
		fo(i,n){
			cin >> a[i];
			if(a[i]%2) o++;
			else e++;
		}
		if(o%2!=e%2) cout << "NO" << endl;
		else{
			if(e%2==0){
				cout << "YES" << endl;
			}else{
				bool ok = false;
				fo(i,n){
					Fo(j,i+1,n){
						if(a[i]%2!=a[j]%2 && abs(a[i]-a[j])==1){
							cout << "YES" << endl;
							ok = true;
							break;
						}
					}
					if(ok) break;
				}
				if(!ok) cout << "NO" << endl;
			}
		}
	}
	
	return 0;
}