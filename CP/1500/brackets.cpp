#include<bits/stdc++.h>
using namespace std;

const int mxn = 34567;
string s;

struct Tree {
	int sum, minsum;
} tree[2*mxn];

void build(int start, int end, int ind){
	if(start==end){
		tree[ind].sum = tree[ind].minsum = (s[start]=='(' ? 1 : -1);
		return;
	}
	int mid = (start+end)/2;

	build(start,mid,2*ind);
	build(mid+1,end,2*ind+1);

	tree[ind].sum = tree[2*ind].sum + tree[2*ind+1].sum;
	tree[ind].minsum = min(tree[2*ind].minsum, tree[2*ind].sum + tree[2*ind+1].minsum);
}

void update(int start, int end, int ind, int id){
	if(start==end){
		tree[ind].sum = tree[ind].minsum = - tree[ind].sum;
		return;
	}

	int mid = (start+end)/2;
	if(id<=mid) update(start,mid,2*ind,id);
	else update(mid,end,2*ind+1,id);

	tree[ind].sum = tree[2*ind].sum + tree[2*ind+1].sum;
	tree[ind].minsum = min(tree[2*ind].minsum, tree[2*ind].sum + tree[2*ind+1].minsum);
}

int main(){
	int len,test=1;
	while(scanf("%d", &len)==1){
		//int n; cin >> n;
		cin >> s;
		build(0,len-1,1);
		printf("Test %d:",test++);
		int q; cin >> q;
		while(q--){
			int indx; cin >> indx;
			if(!indx){
				if(!tree[1].sum && !tree[1].minsum) cout << "YES\n";
				else cout << "NO\n";
			}
			update(0,len-1,1,indx-1);
		}
	}
}