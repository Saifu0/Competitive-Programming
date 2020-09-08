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


int main(){
	NINJA;
	int n,k; cin >> n >> k;
	string s;
	
	int a[n+2];
	//int cnt=0;

	Fo(i,1,n+1){
		char ch; cin >> ch;
		a[i] = ch-'A';
	}

	if(n==1){
		cout << 0 << endl;
		cout << char(a[1]+'A') << endl;
		return 0;
	}

	if(k>=3){
		int cnt = 0;
		a[n+1] = -1;

		for(int i=1;i<n;i++){
			if(a[i]==a[i+1]){
				cnt++;
				if(a[i]!=0 && a[i+2]!=0) a[i+1] = 0;
				else if(a[i]!=1 && a[i+2]!=1) a[i+1] = 1;
				else if(a[i]!=2 && a[i+2]!=2) a[i+1] = 2;
			}
		}

		cout << cnt << endl;
		Fo(i,1,n+1){
			cout << char(a[i]+'A');
		}
		cout << endl;
	}else{
		int a1,a2;
		a1 = a2 = 0;
		Fo(i,1,n+1){
			if(i%2==1){
				if(a[i]!=0) a1++;
			}else{
				if(a[i]!=1) a1++; 
			}
		}

		Fo(i,1,n+1){
			if(i%2==1){
				if(a[i]!=1) a2++;
			}else{
				if(a[i]!=0) a2++;
			}
		}

		if(a1<a2){
			cout << a1 << endl;
			Fo(i,1,n+1){
				if(i%2==1) cout << 'A';
				else cout << 'B';
			}
		}else{
			cout << a2 << endl;
			Fo(i,1,n+1){
				if(i%2==1) cout << 'B';
				else cout << 'A';
			}
		}
	}


	return 0;
}