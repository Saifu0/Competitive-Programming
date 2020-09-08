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

const int mxn = 1010;
int seg1[4*mxn][4*mxn];
int f_seg[4*mxn][4*mxn];
int a[mxn][mxn];
int n,q;

void init_build(int l, int r, int i, int strip){
	if(l==r){
		seg1[i][strip] = a[l][strip];
		return;
	}

	int m = (l+r)/2;
	init_build(l,m,2*i,strip);
	init_build(m+1,r,2*i+1,strip);

	seg1[i][strip] = seg1[2*i][strip] + seg1[2*i+1][strip];
}

void final_build(int l, int r, int i){
	if(l==r){
		Fo(j,1,2*n) f_seg[i][j] = seg1[j][l];
		return;
	}

	int m = (l+r)/2;
	final_build(l,m,2*i);
	final_build(m+1,r,2*i+1);

	Fo(j,1,2*n) f_seg[i][j] = f_seg[2*i][j] + f_seg[2*i+1][j];
}

int final_query(int i, int l, int r, int x1, int x2, int pos){
	if(x1 > r || x2 < l) return 0;

	if(x1 <= l && x2 >= r) return f_seg[pos][i];

	int m = (l+r)/2;

	int x = final_query(2*i,l,m,x1,x2,pos);
	int y = final_query(2*i+1,m+1,r,x1,x2,pos);

	return (x+y);
}

int query(int i, int l, int r, int x1, int x2, int y1, int y2){
	if(y1 > r || y2 < l) return 0;

	if(y1 <= l && y2 >= r) return final_query(1,1,n,x1,x2,i);

	int m = (l+r)/2;

	int x = query(2*i,l,m,x1,x2,y1,y2);
	int y = query(2*i+1,m+1,r,x1,x2,y1,y2);

	return (x+y);
}

int32_t main(){
	NINJA;
	cin >> n >> q;
	fo(i,n){
		fo(j,n){
			char ch;
			cin >> ch;
			a[i][j] = ch == '*';
		}
	}

	fo(i,n) init_build(0,n-1,1,i);

	final_build(0,n-1,1);

	// fo(i,n){
	// 	fo(j,n){
	// 		cout << a[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	while(q--){
		int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
		//--y1, --x1, --y2, --x2;
		cout << query(1,1,n,x1,x2,y1,y2) << endl;
	}
	return 0;
}