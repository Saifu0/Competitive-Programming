#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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

const int mxn = 2e6 + 500;
int lps[mxn];

int main(){
	NINJA;
	int n; cin >> n;
	string a,b; cin >> a >> b;

	lps[0] = 0;
	int i=1;

	string s = a + "#" + b;
	n = sz(s);
	int len = 0;

	while(i<n){
		if(s[i]==s[len]){
			len++;
			lps[i] = len;
			i++;
		}else{
			if(len!=0) len = lps[len-1];
			else{
				lps[i] = 0;
				i++;
			}
		}
	}

	//fo(i,n) cout << lps[i] << " ";

	int mx = -1e9;
	int ind = -1;

	Fo(i,sz(a),n) {
		if(mx<lps[i]){
			mx = lps[i];
			ind = i;
		}
	}

	ind = ind-sz(a)-mx;

	cout << ind << endl;

	return 0;
}