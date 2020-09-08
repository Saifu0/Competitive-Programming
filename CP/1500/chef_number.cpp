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

const int mxn = 1e4+100;


int32_t main(){
	NINJA;
	
	int t; cin >> t;
	while(t--){
		int a[mxn];
		bool vis[mxn]={false};
		int n; cin >> n;
		fo(i,n) cin >> a[i];
		
		int mxx = 0;
		int pos = a[0];
		
		fo(i,n){
			if(!vis[a[i]]){
				vis[a[i]] = true;
				int cnt = 1;
				
				bool f = false;
				
				Fo(j,i+1,n){
					if(a[j]==a[i]){
						if(f==false && a[j-1]==a[i]){
							f = true;
						}else{
							cnt++;
							f=false;
						}
					}
				}
				
				if(cnt>mxx || (cnt==mxx && a[i] < pos)){
					mxx = cnt;
					pos = a[i];
				}
				//cout << cnt << " ";
			}
		}
		cout << pos << endl;
		
//		fo(i,n) vis[a[i]] = false;


	}
	

	return 0;
}

