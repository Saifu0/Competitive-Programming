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
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

int n = 3;

bool is_magic(vi a){
	int r[3][3];
	fo(i,3){
		fo(j,3){
			r[i][j] = a[3*i+j];
		}
	}

	int s = 0;
	fo(i,3) s += r[i][0];

	fo(i,3){
		int sum = 0;
		fo(j,3){
			sum += r[i][j];
		}
		if(sum!=s) return false;
	}

	fo(i,3){
		int sum = 0;
		fo(j,3){
			sum += r[j][i];
		}
		if(sum != s) return false;
	}

	int sum =0;
	fo(i,3) sum += r[i][i];

	if(sum != s) return false;

	sum = 0;

	fo(i,3) sum += r[2-i][i];
	if(sum != s) return false;

	return true;
}

void find_mat(vector<vector<int>>& mat){
	vi a;
	fo(i,9) a.pb(i+1);

	do{
		if(is_magic(a)) mat.pb(a);
	}while(next_permutation(a.begin(), a.end()));
}

int32_t main(){
	NINJA;

	vi a;
	fo(i,9){
		int x; cin >> x;
		a.pb(x);
	}

	vector<vector<int>> mat;
	find_mat(mat);

	int res = inf;

	for(auto it : mat){
		int dif = 0;
		fo(i,9){
			dif += abs(a[i]-it[i]);
		}
		res= min(res,dif);
	}

	cout << res << endl;

	return 0;
}