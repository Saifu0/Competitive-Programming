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

const int mxn = 100010;

int tree[4*mxn][3];
int lazy[4*mxn];

void build(int start, int end, int ind){
	if(start==end){
		tree[ind][0] = 1;
		return;
	}
	int mid = (start+end)/2;

	build(start,mid,2*ind);
	build(mid+1,end,2*ind+1);

	tree[ind][0] = tree[2*ind][0] + tree[2*ind+1][0];
}

void update(int start, int end, int ind, int l, int r){
	if(start>end) return;

	if(lazy[ind]){
		int a[3];
		fo(i,3) a[(i+lazy[ind])%3] = tree[ind][i];
		fo(i,3) tree[ind][i] = a[i];
		if(start!=end){
			lazy[2*ind] += lazy[ind];
			lazy[2*ind+1] += lazy[ind];
		}
		lazy[ind] = 0;
	}

	if(l>end || r < start) return;

	if(l<=start && end<=r){
		if(start != end)
         {
             lazy[2 * ind]++;
             lazy[2 * ind + 1]++;
         }
         ll tmp = tree[ind][0];
         tree[ind][0] = tree[ind][2];
         tree[ind][2] = tree[ind][1];
         tree[ind][1] = tmp;
	}
	else{
		int mid = (start+end)/2;
		update(start,mid,2*ind,l,r);
		update(mid+1,end,2*ind+1,l,r);
		fo(i,3) tree[ind][i] = tree[2*ind][i] + tree[2*ind+1][i];
	}
}

int query(int start, int end, int ind, int l, int r){
	if(start>end || l>end || r < start) return 0;
	if(lazy[ind]){
		int a[3];
		fo(i,3) a[(i+lazy[ind])%3] = tree[ind][i];
		fo(i,3) tree[ind][i] = a[i];
		if(start!=end){
			lazy[2*ind] += lazy[ind];
			lazy[2*ind+1] += lazy[ind];
		}
		lazy[ind] = 0;
	}

	if(l<=start && end <= r) return tree[ind][0];
	else{
		int mid = (start+end)/2;

		int a = query(start,mid,2*ind,l,r);
		int b = query(mid+1,end,2*ind+1,l,r);

		return a+b;
	}
	
}

int main(){
	NINJA;
	int n,q; cin >> n >> q;

	fo(i,4*mxn) lazy[i] = 0;

	build(0,n-1,1);

	// fo(i,4*n){
	// 	cout << tree[i].cnt << endl;
	// }

	while(q--){
		int t,l,r; cin >> t >> l >> r;
		if(t==0){
			update(0,n-1,1,l,r);
		}else{
			cout << query(0,n-1,1,l,r) << endl;
		}
	}

	return 0;
}