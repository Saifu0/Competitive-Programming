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

const int blk = 555;
const int mxn = 2e5+500;

struct query {
	int l,r,ind;
};

query q[mxn];
int ans[mxn], a[mxn];
int freq[1000001];
int cnt = 0;

bool cmp(query x, query y){
	if(x.l/blk != y.l/blk) return x.l/blk < y.l/blk;

	else return x.r < y.r ; 
}

void add(int pos){
	freq[a[pos]]++;
	if(freq[a[pos]]==1) cnt++;
}

void remove(int pos){
	freq[a[pos]]--;
	if(freq[a[pos]]==0) cnt--;
}

int main(){
	NINJA;

	int n; cin >> n;
	fo(i,n) cin >> a[i];

	int qr; cin >> qr;
	while(qr--){
		cin >> q[i].l >> q[i].r;
		--q[i].l, --q[i].r;
		q[i].ind = i;
	}


	sort(q,q+qr,cmp);

	int ml = 0, mr = -1;
	
	fo(i,qr){
		int l = q[i].l;
		int r = q[i].r;
		int ind = q[i].ind;

		while(ml>l)
			--ml, add(ml);
		while(mr<r)
			++mr, add(mr);

		while(ml<l)
			remove(ml), ++ml;

		while(mr>r)
			remove(mr), --mr;

		ans[ind] = cnt;

	}

	fo(i,qr) cout << ans[i] << endl;

	return 0;
}