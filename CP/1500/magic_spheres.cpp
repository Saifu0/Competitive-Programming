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

	int a,b,c; cin >> a >> b >> c;

	int x,y,z; cin >> x >> y >> z;

	int aa = 0,bb=0,cc=0;

	if(a>x) aa += a-x, a=x;
	if(b>y) bb += b-y, b=y;
	if(c>z) cc += c-z, c=z;

	while(true){
		if(a<x && (bb>1 || cc>1)){
			if(bb>=2){
				a += 1;
				bb -= 2;
			}else if(cc>=2){
				a += 1;
				cc -= 2;
			}
		}else{
			break;
		}
	}

	while(true){
		if(b<y && (aa>1 || cc>1)){
			if(aa>=2){
				b += 1;
				aa -= 2;
			}else if(cc>=2){
				b += 1;
				cc -= 2;
			}
		}else{
			break;
		}
	}

	while(true){
		if(c<z && (bb>1 || aa>1)){
			if(bb>=2){
				c += 1;
				bb -= 2;
			}else if(aa>=2){
				c += 1;
				aa -= 2;
			}
		}else{
			break;
		}
	}

	if(a>=x && b>=y && c>=z) cout << "YES" << endl;
	else cout << "NO" << endl;


	return 0;
}