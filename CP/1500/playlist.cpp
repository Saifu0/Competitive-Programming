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

const int mxn = 2e5+500;
ll a[mxn];

int main(){
	NINJA;

	int n; cin >> n;
	
	set<int> s;
	vi v;

	int curr = 0;
	int tot  = 0;

	fo(i,n){
		int x; cin >> x;
		if(s.find(x)!=s.end()){
			int b =0;
			s.erase(v[b]);
			while(true){
				if(v[b]==x) break;
				b++;
				s.erase(v[b]);
			}

			v.erase(v.begin(), v.begin()+b+1 );
			curr -= (b+1);
		}
		v.pb(x);
		s.insert(x);
		curr++;
		tot = max(tot,curr);
	}

	cout << tot << endl;

	

	return 0;
}