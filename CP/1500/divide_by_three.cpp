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

string s;
vector<string> a;
int n;

string clean(string t){
	int i = 0;
	while(i+1<t.size() && t[i]=='0') i++;
	return t.substr(i);
}

int32_t main(){
	NINJA;
 	
 	cin >> s;
 	n = sz(s);

 	int sum = 0;
 	for(char c : s) sum += (c-'0');
 	sum %= 3;

 	if(sum!=0){
 		dloop(i,n){
 			if((s[i]-'0')%3==sum){
 				string t = s.substr(0,i) + s.substr(i+1);
 				t = clean(t);
 				if(!t.empty()) a.pb(t);
 				break;
 			}
 		}
 		int p=-1;
 		dloop(i,n){
 			if((s[i]-'0')%3==sum || (s[i]-'0')%3==0) continue;
 			if(p==-1){
 				p = i;
 				continue;
 			}
 			string t = s.substr(0,i) + s.substr(i+1,p-i-1) + s.substr(p+1);
 			t = clean(t);
 			if(!t.empty()) a.pb(t);
 			break;
 		}
 	}else{
 		s = clean(s);
 		if(sz(s)) a.pb(s);
 	}

 	string ans = "";
 	for(auto each : a){
 		if(sz(ans) < sz(each)) ans = each;
 	}
 	if(ans.empty()) cout << -1 << endl;
 	else cout << ans << endl;
	
	return 0;
}