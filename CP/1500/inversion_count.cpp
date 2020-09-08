#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

const int mxn = 1e5+500;

int find_pos(vi a, int val){
	int l = 0, r = sz(a)-1;
	int res;
	
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid]>val){
			r = mid-1;
			res = mid;
		}else{
			l = mid+1;
		}
	}
	
	return res;
}

int32_t main(){
	NINJA;
	
	int n; cin >> n;
	vi a;
	
	int ans = 0;
	
	fo(i,n){
		int x; cin >> x;
		if(sz(a)==0) a.pb(x);
		else if(a.back() < x) a.pb(x);
		else if(a.front()>x){
			ans += sz(a);
			a.insert(a.begin(),x);
		}else{
			int k = find_pos(a,x);
			ans += sz(a)-k;
			a.insert(a.begin()+k,x);
		}
	}
	
	cout << ans << endl;
	
	for(auto it : a) cout << it << " ";
	

	return 0;
}

