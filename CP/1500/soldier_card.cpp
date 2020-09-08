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

const int mxn = 4000000;

int32_t main(){
	NINJA;
	
	int n; cin >> n;
	
	int k1,k2; cin >> k1;
	
	list<int> s1,s2,ss,sss;
	fo(i,k1){
		int x; cin >> x;
		s1.push_back(x);
		ss.pb(x);
	}
	
	cin >> k2;
	
	fo(i,k2){
		int x; cin >> x;
		s2.push_back(x);
		sss.pb(x);
	}
	
	int cnt = 0;
	
	while(!s1.empty() && !s2.empty()){
		int x = *s1.begin();
		int y = *s2.begin();
		s1.pop_front();
		s2.pop_front();
		
		cnt++;
		
	//	cout << x << " " << y << endl;
		
		if(x>y){
			s1.push_back(y);
			s1.push_back(x);
		}else{
			s2.push_back(x);
			s2.push_back(y);
		}
		
		if((s1==ss && s2==sss) || cnt > mxn){
			cout << -1 << endl;
			return 0;
		}
	}
	
	cout << cnt << " ";
	if(s1.empty()) cout << 2 << endl;
	else cout << 1 << endl;
	
	return 0;
}
