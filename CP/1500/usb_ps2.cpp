// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define ld long double
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

	int usb,ps2,both; cin >> usb >> ps2 >> both;
	vi a,b;
	int n; cin >> n;
	fo(i,n){
		int val; cin >> val;
		string s; cin >> s;
		if(s=="USB") a.pb(val);
		else b.pb(val);
	}
	int cnt = 0;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int i=0;
	int cost = 0;
	while(i<sz(a) && usb>0){
		cost += a[i];
		cnt++;
		usb--;
		i++;
	}
	int j = 0;
	while(j<sz(b) && ps2>0){
		cost += b[j];
		cnt++;
		ps2--;
		j++;
	}
	while(i<sz(a)&&j<sz(b)&&both>0){
		if(a[i]<=b[j]){
			cost += a[i++];
		}else{
			cost += b[j++];
		}
		both--;
		cnt++;
	}
	while(i<sz(a)&&both>0){
		cost += a[i++];
		both--;
		cnt++;
	}
	while(j<sz(b)&&both>0){
		cost += b[j++];
		both--;
		cnt++;
	}
	cout << cnt << " " << cost <<  endl;
	
	return 0;
}