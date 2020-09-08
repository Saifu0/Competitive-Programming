#include<bits/stdc++.h>
using namespace std;

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

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

const int N = 4e6;
int a[N];

int main(){
	c_p_c();
	int n; cin >> n;
	
	fo(i,n) cin >> a[i];

	vi s;
	int depth = INT_MIN;
	int ind = -1;
	int mxn = INT_MIN;
	int indM = -1;
	
	//vi st;

	int cnt = 0;
	fo(i,n){
		if(a[i]==1){
			s.pb(a[i]);
			cnt++;
			int szz = sz(s);
			if(szz > depth){
				depth = szz;
				ind = i+1;
			}
		}
		if(a[i]==2) {
			s.pop_back();
			cnt++;
			if(s.empty()){
				if(cnt>mxn){
					mxn = cnt;
					indM = i+2-cnt;
				}
				cnt = 0;
			}
		}

	}

	cout << depth << " " << ind << " " << mxn << " " << indM << endl;


	return 0;
}
