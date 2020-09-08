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

string s; 
int n;

vi LPS(){
	vi lps(n);
	lps[0] = 0;
	int j = 0;
	int i = 1;

	while(i<n){
		if(s[i]==s[j]){
			j++;
			lps[i++] = j;
		}else{
			if(j!=0){
				j = lps[j-1];
			}else{
				lps[i++] = 0;

			}
		}
	}
	return lps;
}

int32_t main(){
	NINJA;

	cin >> s;
	n = s.length();

	if(n<=2){
		cout << "Just a legend" << endl;
		return 0;
	}

	vi lps = LPS();

	if(lps[n-1]==0){
		cout << "Just a legend" << endl;
	}

	// fo(i,n) cout << lps[i] << " ";
	// cout << endl;

	fo(i,n-1){
		if(lps[i]==lps[n-1]){
			cout << s.substr(0,lps[n-1]) << endl;
			return 0;
		}
	}

	if(lps[lps[n-1]-1]==0) cout << "Just a legend" << endl;
	else cout << s.substr(0,lps[lps[n-1]-1]) << endl;


	
	return 0;
}