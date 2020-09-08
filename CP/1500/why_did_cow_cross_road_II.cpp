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


int first_happen(int letter[],int id, int n){
	fo(i,n){
		if(letter[i]==id){
			return i;
		}
	}
	return -1;
}

int last_happen(int letter[],int id, int n){
	dloop(i,n){
		if(letter[i]==id){
			return i;
		}
	}
	return -1;
}

int singles(int letter[],int j,int first, int last, int n){
	int cnt[26];
	fo(i,26) cnt[i] = 0;
	for(int i=first+1;i<last;i++) cnt[letter[i]]++;
	int c = 0;
	Fo(i,j+1,26){
		if(cnt[i]==1) c++;
	}
	return c;
}

int32_t main(){
	NINJA;
	// freopen("circlecross.in", "rt", stdin);
	// freopen("circlecross.out", "wt", stdout);
	int letter[55] = {0};
	string s; cin >> s;
	int n = sz(s);
	int i =0;
	for(char c : s) letter[i++] =(c-'A');
	// fo(i,n) cout << letter[i] << " ";

	int ans = 0;
	fo(i,26){
		int first = first_happen(letter,i,n);
		int last = last_happen(letter,i,n);
		ans += singles(letter,i,first,last,n);
		cout << ans << endl;
	}
	cout << ans << endl;
	
	return 0;
} 