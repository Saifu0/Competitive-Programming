#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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

typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;


int main(){
	NINJA;

	int n; cin >> n;
	int k; cin >> k;

	vi a(n+1);
	fo(i,n) cin >> a[i];
	indexed_set s;

	fo(i,k){
		s.insert(a[i]);
	}

	cout << *s.find_by_order((k+1)/2-1) << " ";

	for(int i=0;i<n-k;i++){
		s.erase(s.find_by_order(s.order_of_key(a[i])));
		s.insert(a[i+k]);
		cout << *s.find_by_order((k+1)/2-1) << " ";	
	}



	return 0;
}