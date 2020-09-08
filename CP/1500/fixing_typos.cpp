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

const int mxn = 200000 +10;
int f[mxn];

int32_t main(){
	NINJA;
	
	string s; cin >> s;
	int n = sz(s);

	if(n==1 || n==2){
		cout << s << endl;
		return 0;
	}

	string ans = "";

	string temp= "";
	temp += s[0];
	temp += s[1];
	ans += s[0];
	int cnt = 2;
	Fo(i,2,n){
		if(s[i]==s[i-1] && s[i]==s[i-2]) continue;
		cnt++;
		temp += s[i];
	}

	s = temp;
//	cout << s << endl;
	Fo(i,1,cnt){
		if(s[i]==s[i-1]){
			f[i]++;
			if((i-2)>=0 && f[i-2] || f[i-1]) {
				f[i] = 0;
				continue;
			}
		}
		ans += s[i];
	}

	cout << ans << endl;

	return 0;
}