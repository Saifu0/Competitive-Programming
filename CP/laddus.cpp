#include<bits/stdc++.h>
using namespace std;

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

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main(){
	c_p_c();
	int t; cin >> t;
	while(t--){
		bool flag=false;
		int n; cin >> n;
		string origin; cin >> origin;
		if(origin=="INDIAN") flag= true;
		ll laddus = 0;
		while(n--){
			string s; cin >> s;
			if(s=="TOP_CONTRIBUTOR"){
				laddus += 300;
			}else if(s=="BUG_FOUND"){
				int a; cin >> a;
				laddus += a;
			}else if(s=="CONTEST_HOSTED"){
				laddus += 50;
			}else if(s=="CONTEST_WON"){
				int a; cin >> a;
				laddus += 300;
				if(a<20) laddus += 20-a;
			}
		}

		if(flag){
			cout << laddus/200 << endl;
		}else{
			cout << laddus/400 << endl;
		}
	}

	return 0;
}