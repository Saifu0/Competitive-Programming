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

const int mxn = 150001;


int32_t main(){
	NINJA;

	int n; cin >> n;
	vi a;
	fo(i,n){
		int x; cin >> x;
		a.pb(x);
	}

	sort(a.rbegin(), a.rend());

	int lst = a[0] + 2;

	int cnt = 0;
	fo(i,n){
		int cur = -1;
		for(int j=1;j>=-1;j--){
			if(j + a[i] > 0 && j+a[i] < lst){
				cur = a[i] + j;
				break;
			}
		}
		if(cur == -1) continue;
		cnt++;
		lst = cur;
	}

	cout << cnt << endl;
	
	return 0;
}