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

const int mxn = 1e5+10;

string s;
string pat = "ninjas";

void solve(string s, int pref[]){
	int n  =sz(s);
	fo(i,n){
		if(s[i]=='n'){
			Fo(j,i+1,n){
				if(s[j]=='i'){
					Fo(k,j+1,n){
						if(s[k]=='n'){
							Fo(l,k+1,n){
								if(s[l]=='j'){
									Fo(m,l+1,n){
										if(s[m]=='a'){
											Fo(o,m+1,n){
												if(s[o]=='s'){
													pref[o]++;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	for1(i,n-1) pref[i] += pref[i-1];
}

int32_t main(){
	NINJA;

	cin >> s;
	int n = sz(s);
	int q; cin >> q;

	int pref[mxn],suf[mxn];
	memset(pref,0,sizeof(mxn));
	memset(suf,0,sizeof(mxn));


	solve(s,pref);
	reverse(s.begin(), s.end());
	solve(s,suf);

	while(q--){
		char c; cin >> c;
		int t; cin >>t;
		t--;
		if(c=='p') cout << pref[t] << endl;
		else cout << suf[t] << endl;
	}
	
	return 0;
} 