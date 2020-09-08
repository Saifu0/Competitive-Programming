// #include<bits/stdc++.h>
// using namespace std;

// #define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// #define fo(i,n) for(int i=0;i<n;i++)
// #define Fo(i,k,n) for(int i=k;i<n;i++)
// #define iii tuple<int,int,int>
// #define vi vector<int>
// #define ii pair<int,int>
// #define vii vector<ii>
// #define int long long
// #define pb push_back
// #define endl "\n"
// #define setbits __builtin_popcountll
// #define mp map<int,int>
// #define F first
// #define S second
// #define sz(v) (int)v.size()
// #define mod 1000000007
// #define inf (int)1e18

// int32_t main(){
// 	NINJA;

// 	int t; cin >> t;
// 	while(t--){
// 		int n; cin >> n;
// 		int mat[n+5][n+5];

// 		Fo(i,1,n+1) Fo(j,1,n+1) mat[i][j] = 0;

// 		int k = 1;
// 		for(int i=1;i<=n;i+=2){
// 			for(int j=1,l=i;j<=i,l>=1;j++,l--){
// 				if(mat[l][j]==0){
// 					mat[l][j] = k;
// 					k+=2;
// 				}
				
// 			}
// 			// int r = i;
// 			// int c = 1;

// 			// while(r<=n && c<=n){
// 			// 	if(mat[r][c]==0){
// 			// 		mat[r][c] = k;
// 			// 		k+=2;
// 			// 	}
// 			// 	r++,c++;
// 			// }

// 		}

// 		// int od = k;

// 		for(int i=2;i<=n;i+=2){
// 			for(int j=n,l=i;j>=1,l<=n;j--,l++){
// 				if(mat[l][j]==0){
// 					mat[l][j] = k;
// 					k += 2;
// 				}
// 			}
// 		}



// 		k =2;
// 		for(int i=2;i<=n;i+=2){
// 			for(int j=1,l=i;j<=i,l>=1;j++,l--){
// 				if(mat[l][j]==0){
// 					mat[l][j] = k;
// 					k+=2;
// 				}
// 			}

// 			// int r = i;
// 			// int c = 1;

// 			// while(r<=n && c<=n){
// 			// 	if(mat[r][c]==0){
// 			// 		mat[r][c] = k;
// 			// 		k+=2;
// 			// 	}
// 			// 	r++,c++;
// 			// }
// 		}
// 		// int even = k;

// 		// k = od;

// 		// for(int i=1;i<=n;i+=2){
// 		// 	for(int j=1,l=i;j<=i,l>=1;j++,l--){
				
// 		// 		if(mat[l][n-j+1]==0){
// 		// 			mat[l][n-j+1] = k;
// 		// 			k+=2;
// 		// 		}	
// 		// 	}

// 		// }

// 		// k = even;

// 		// for(int i=2;i<=n;i+=2){
// 		// 	for(int j=1,l=i;j<=i,l>=1;j++,l--){
				
// 		// 		if(mat[l][n-j+1]==0){
// 		// 			mat[l][n-j+1] = k;
// 		// 			k+=2;
// 		// 		}	
// 		// 	}

// 		// }

// 		for(int i=1;i<=n;i+=2){
// 			for(int j=n,l=i;j>=1,l<=n;j--,l++){
// 				if(mat[l][j]==0){
// 					mat[l][j] = k;
// 					k += 2;
// 				}
// 			}
// 		}



// 		Fo(i,1,n+1){
// 			Fo(j,1,n+1){
// 				cout << mat[i][j] << "   ";
// 			}
// 			cout << endl;
// 		}
// 		cout << endl;
// 	}
	
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;

#define N 1234
int mat[N][N];

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;

		for(int i=0;i<n;i++) for(int j=0;j<n;j++) mat[i][j] = 0;
		int s = 1, e = 2; 
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) {
				if((i+j)%2) cout << e << " ", e += 2;
				else cout << s << " " , s += 2;
			}
			cout << endl;
		}
		cout << endl;
	}
}