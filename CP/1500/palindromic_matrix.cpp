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

const int mxn = 20*20+10;
int a[mxn];
int mat[25][25];

int32_t main(){
	NINJA;

	int n; cin >> n;
	
	mp m;

	fo(i,n*n){
		int x; cin >> x;
		a[i] = x;
		m[x]--;
	}

	if(n==1){
		cout << "YES" << endl;
		cout << a[0] << endl;
		return 0;
	}

	bool f = 0;
	for(auto it : m){
		if(it.S*-1%4!=0 && n%2==0){
			cout << "NO" << endl;
			return 0;
		}
		if(it.S*-1%2 && n%2){
			f = 1;
		}
	}

	if(!f && n%2==1){
		cout << "NO" << endl;
		return 0;
	}


	fo(i,n/2){
		fo(j,n/2){
			auto it = m.begin();
			int cnt = -1*it->S;
			mat[i][j] = it->F;
			mat[i][n-j-1] = it->F;
			mat[n-i-1][j] = it->F;
			mat[n-i-1][n-j-1] = it->F;
			cnt -= 4;
			if(cnt!=0) m[it->F] = -1*cnt;
			else m.erase(m.begin());
			// m[it->F] = -1*cnt;
		}
	}

	if(n%2==1){
		int idx = n/2;

		for(auto it=m.begin();it!=m.end();it++){
			if(-1*it->S%2==1){
				int cnt = -1*it->S;
				mat[idx][idx] =  it->F;
				// mat[i][n-j-1] = it->F;
				// mat[n-i-1][j] = it->F;
				// mat[n-i-1][n-j-1] = it->F;
				cnt -= 1;
				if(cnt!=0) m[it->F] = -1*cnt;
				else m.erase(m.begin());
			}
		}

		fo(i,idx){
			auto it = m.begin();
			int cnt = -1*it->S;
			if(cnt<2){
				cout << "NO" << endl;
				return 0;
			}
			mat[i][idx] = it->F;
			mat[n-i-1][idx] = it->F;
			// mat[n-i-1][j] = it->F;
			// mat[n-i-1][n-j-1] = it->F;
			cnt -= 2;
			// m[it->F]
			if(cnt!=0) m[it->F] = -1*cnt;
			else m.erase(m.begin());
		}
		// auto it = m.begin();
		// int cnt = -1*it->S;
		
		fo(i,idx){
			auto it = m.begin();
			int cnt = -1*it->S;
			if(cnt<2){
				cout << "NO" << endl;
				return 0;
			}
			// mat[i][j] = it->F;
			// mat[i][n-j-1] = it->F;
			mat[idx][i] = it->F;
			mat[idx][n-i-1] = it->F;
			cnt -= 2;
			if(cnt!=0) m[it->F] = -1*cnt;
			else m.erase(m.begin());
		}
		
	}

	cout << "YES" << endl;

	fo(i,n){
		fo(j,n){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

	
	return 0;
}