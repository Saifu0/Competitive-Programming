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

typedef tuple<int,int> tt;
typedef multimap<tt,int> mii;
typedef priority_queue<tt,vector<tt>,greater<tt>> pq;

int main(){
	NINJA;
	int k = 0;

	int n; cin >> n;
	mii m;

	fo(i,n){
		int f,s; cin >> f >> s;
		m.insert({make_tuple(f,s),i});
	}
	pq q;
	vi v(n);
	for(auto it=m.begin();it!=m.end();it++){
		int a,b,c;
		tie(a,b) = it->F;

		if(q.empty() || get<0>(q.top()) >= a){
			c = ++k;
		}else{
			c=get<1>(q.top());
			q.pop();
		}
		q.push(make_tuple(b,c));
		v[it->S] = c;		
	}
	cout << k << endl;
	fo(i,n) cout << v[i] << " ";
	return 0;
}