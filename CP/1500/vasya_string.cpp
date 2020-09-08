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

int n,k; 
string a;

int solve(char x){
	int j=0;
	int c=0;
	int ans = -1;
	fo(i,n){
		if(a[i]!=x) c++;

		while(j<=i && c>k){
			if(a[j++]!=x) c--;
		}
		if(i-j+1>ans) ans = i-j+1;
	}
	return ans;
}

int32_t main(){
	NINJA;

	cin >> n >> k;

	cin >> a;

	int res1 = solve('a');
	int res2 = solve('b');

	cout << max(res1,res2) << endl;


	
	return 0;
}