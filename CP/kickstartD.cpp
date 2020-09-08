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

typedef struct data {
	data* child[26];
	int cnt = 0;
} trie;

const int mxn = 1e5+5;

trie*root;
int n,k;
string a[mxn];

void insert(string&s){
	int len = sz(s);
	trie*cur = root;
	fo(i,len){
		int ind = s[i]-'A';
		if(!cur->child[ind]){
			cur->child[ind] = new trie();
		}
		cur = cur->child[ind];
	}
	cur->cnt++;
}

int ans;

void dfs(trie*cur, int lvl){
	fo(i,26){
		if(cur->child[i]){
			dfs(cur->child[i],lvl+1);
			cur->cnt += cur->child[i] ->cnt;
		}
	}
	if(cur->cnt>=k){
		cur->cnt -= k;
		ans += lvl;
	}
}

int main(){
	NINJA;
	int t; cin >> t;
	int tc=1;
	while(t--){
		cin >> n >> k;
		ans = 0;
		root = new trie();
		fo(i,n){
			cin >> a[i];
			insert(a[i]);	
		}


		dfs(root,0);

		cout << "Case #" << tc++ << ": " << ans << endl;
	}

	return 0;
}