#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

int32_t main(){
	NINJA;
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		
		vi a;
		mp m;
		set<int> ss;
		
		fo(i,n){
			int x; cin >> x;
			a.pb(x);
			if(m[x]==0)
			m[x] = i;
			ss.insert(x);
		}
		
		set<int> s;
		int cnt=0;
		
	//	sort(b.begin(),b.end());
		
		for(auto it : m){
			if(s.find(it.F)==s.end()){
				s.insert(it.F);
				cnt++;
				auto itr = ss.find(it.F);
				itr++;
				Fo(j,it.S+1,n){
					if(s.find(a[j])==s.end() && a[j] == *itr){
						s.insert(a[j]);
						itr++;
					}
				}
			}
		}
		
	//	for(auto it : s) cout << it << " " ;
		
		cout << cnt << endl;
	}
	

	return 0;
}

