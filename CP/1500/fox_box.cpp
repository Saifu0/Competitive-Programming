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

const int mxn = 123;
int n;
multiset<int> m;

int main(){
	NINJA;
	cin >> n;
	fo(i,n){
		int x; cin >> x;
		m.insert(x);
	}
	int ans = 0;

	//for(auto it : m) cout << it << endl;
	while(m.size()){
		int cnt = 0;
		auto it = m.begin();
		while(it!=m.end()){
			if(cnt<=*it){
				cnt++;
				m.erase(it++);
			}else it++;
		}
		ans++;
	}

	cout << ans << endl;

	return 0;
}